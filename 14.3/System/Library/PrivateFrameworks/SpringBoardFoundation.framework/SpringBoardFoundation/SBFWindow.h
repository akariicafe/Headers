@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow {
    NSNumber *_isHiddenOverride;
}

@property (retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack;

- (BOOL)_canBecomeKeyWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void)makeKeyWindow;
- (void)resignAsKeyWindow;
- (BOOL)_isEffectivelyHiddenForKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;

@end
