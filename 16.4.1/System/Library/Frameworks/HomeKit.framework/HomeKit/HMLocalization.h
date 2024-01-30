@class NSArray, NSBundle;

@interface HMLocalization : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSBundle *_bundle;
}

@property (readonly, copy) NSArray *stringTable;

+ (id)sharedManager;

- (void)handleLocaleDidChange:(id)a0;
- (id)getLocalizedString:(id)a0;
- (id)init;
- (void)_updateLocalizedStrings;
- (id)getLocalizedOrCustomString:(id)a0;
- (void).cxx_destruct;

@end
