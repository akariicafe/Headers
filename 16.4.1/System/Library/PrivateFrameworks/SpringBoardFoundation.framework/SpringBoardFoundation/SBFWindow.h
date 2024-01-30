@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow {
    NSNumber *_isHiddenOverride;
}

@property (retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack;

- (BOOL)isContentHidden;
- (id)autorotationPreventionReasons;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (BOOL)_canBecomeKeyWindow;
- (void).cxx_destruct;
- (BOOL)isInterfaceAutorotationDisabled;
- (void)makeKeyWindow;
- (BOOL)_isEffectivelyHiddenForKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;
- (id)hostedSceneIdentityTokens;
- (void)resignAsKeyWindow;

@end
