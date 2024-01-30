@class NSMutableDictionary;

@interface HDBackgroundObservationServerExtensionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_availableExtensions;
}

- (id)init;
- (void).cxx_destruct;
- (id)extensionForBundleIdentifier:(id)a0 error:(id *)a1;

@end
