@class NSArray, HMFUnfairLock, NSBundle;

@interface HMLocalization : NSObject {
    HMFUnfairLock *_lock;
    NSBundle *_bundle;
}

@property (readonly, copy) NSArray *stringTable;

+ (id)sharedManager;

- (id)getLocalizedString:(id)a0;
- (id)getLocalizedOrCustomString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleLocaleDidChange:(id)a0;
- (void)_updateLocalizedStrings;

@end
