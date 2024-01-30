@class HDProfile, NSMutableDictionary;

@interface HDBackgroundObservationServerExtensionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_availableExtensions;
}

@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_lock_extensionForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)extensionForBundleIdentifier:(id)a0 error:(id *)a1;

@end
