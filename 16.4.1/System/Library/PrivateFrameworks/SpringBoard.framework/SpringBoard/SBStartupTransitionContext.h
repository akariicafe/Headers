@class NSString, NSURL, BKSDisplayRenderOverlay;

@interface SBStartupTransitionContext : NSObject <BSDescriptionProviding> {
    BOOL _isLoginSession;
}

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSURL *applicationLaunchURL;
@property (copy, nonatomic) NSString *fromApplicationBundleID;
@property (nonatomic) BOOL fromLocked;
@property (nonatomic) BOOL fromUserPowerDown;
@property (nonatomic, getter=isDark) BOOL dark;
@property (nonatomic, getter=isLogin) BOOL login;
@property (nonatomic, getter=isLogout) BOOL logout;
@property (nonatomic) BOOL hasUserSwitchOverlayMismatch;
@property (retain, nonatomic) BKSDisplayRenderOverlay *overlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_representation;
- (id)_initWithRebootContext:(id)a0;
- (id)_initWithRepresentation:(id)a0 loginSession:(BOOL)a1;
- (id)_initWithRestartRequest:(id)a0 fromLocked:(BOOL)a1 fromApplication:(id)a2;
- (id)_initWithShutdownContext:(id)a0;
- (void)_parseOverlayInfo;
- (void)_reallyInitFromRepresentation:(id)a0;

@end
