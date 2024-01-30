@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow {
    NSNumber *_isHiddenOverride;
}

@property (retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack;

- (BOOL)isContentHidden;
- (void)makeKeyWindow;
- (BOOL)_canBecomeKeyWindow;
- (void)setHidden:(BOOL)a0;
- (id)autorotationPreventionReasons;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resignAsKeyWindow;
- (BOOL)_isEffectivelyHiddenForKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;

@end
