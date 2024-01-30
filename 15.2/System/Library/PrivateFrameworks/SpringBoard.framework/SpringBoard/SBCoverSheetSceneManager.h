@class FBDisplayLayoutElement, UIWindow, UIApplicationSceneDeactivationAssertion, NSMutableArray;
@protocol BSInvalidatable;

@interface SBCoverSheetSceneManager : NSObject

@property (retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *notificationCenterAssertion;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *systemAnimationAssertion;
@property (retain, nonatomic) NSMutableArray *pendingSceneUpdateBlocks;
@property (nonatomic, getter=isPerformingSceneUpdate) BOOL performingSceneUpdate;
@property (retain, nonatomic) id<BSInvalidatable> stateCaptureInvalidatable;
@property (weak, nonatomic) UIWindow *coverSheetWindow;

- (void)updateForegroundScenesForCoverSheetAnimationActive:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateSceneManagerForPresented:(BOOL)a0 suspendUnderLockEnvironment:(BOOL)a1;
- (void)_performNextSceneUpdateBlock;
- (id)initWithCoverSheetWindow:(id)a0;
- (void)_setSceneBackgrounded:(BOOL)a0 suspendUnderLockEnvironment:(BOOL)a1;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (void)_updateForegroundScenesForNotificationCenter:(BOOL)a0;
- (void)_performSceneUpdateBlock:(id /* block */)a0;

@end
