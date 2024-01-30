@class NSHashTable, BrightnessSystemClient;

@interface PKBacklightController : NSObject {
    BrightnessSystemClient *_brightnessClient;
    BOOL _foregroundActive;
    NSHashTable *_requesters;
    NSHashTable *_allowers;
    BOOL _isBacklightRamped;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)beginAllowingBacklightRamping:(id)a0;
- (void)endAllowingBacklightRamping:(id)a0;
- (void)endRequestingBacklightRamping:(id)a0;
- (void)beginRequestingBacklightRamping:(id)a0;
- (void)_changeBacklightMinimumEnabledIfNecessary;
- (void)_updateBacklightNits:(float)a0 period:(double)a1 disableWhitePointShift:(BOOL)a2;

@end
