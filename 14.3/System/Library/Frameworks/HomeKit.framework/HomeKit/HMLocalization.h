@class NSArray, HMFUnfairLock, NSBundle;

@interface HMLocalization : NSObject {
    HMFUnfairLock *_lock;
    NSBundle *_bundle;
}

@property (readonly, copy) NSArray *stringTable;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)getLocalizedOrCustomString:(id)a0;
- (void)_updateLocalizedStrings;
- (void)handleLocaleDidChange:(id)a0;
- (id)getLocalizedString:(id)a0;

@end
