@class UIApplication, NSMutableSet;

@interface PXApplicationState : PXObservable {
    NSMutableSet *_disabledIdleTimerTokens;
}

@property (class, readonly, nonatomic) PXApplicationState *sharedState;

@property (readonly, nonatomic) UIApplication *application;
@property (readonly, nonatomic) BOOL isHidden;

- (void)setIsHidden:(BOOL)a0;
- (id)initWithApplication:(id)a0;
- (void)endDisablingIdleTimer:(id)a0;
- (id)beginDisablingIdleTimerForReason:(id)a0;
- (void)_sceneWillDeactivate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_sceneDidActivate:(id)a0;
- (id)initWithApplication:(id)a0 isExtension:(BOOL)a1;
- (void)_appDidHide:(id)a0;
- (void)_appDidUnhide:(id)a0;
- (BOOL)isDisablingIdleTimerForReasons:(id *)a0;

@end
