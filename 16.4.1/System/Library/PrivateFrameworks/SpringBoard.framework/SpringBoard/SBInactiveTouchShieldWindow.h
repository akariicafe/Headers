@interface SBInactiveTouchShieldWindow : _UIRootWindow

+ (BOOL)_isSecure;
+ (id)emptyContentImage;

- (BOOL)_usesWindowServerHitTesting;
- (id)initWithDisplay:(id)a0;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)_appearsInLoupe;
- (BOOL)_canBecomeKeyWindow;

@end
