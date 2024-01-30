@class UIApplication, NSMutableSet;

@interface PXApplicationState : PXObservable {
    NSMutableSet *_disabledIdleTimerTokens;
}

@property (class, readonly, nonatomic) PXApplicationState *sharedState;
@property (class, readonly, nonatomic) BOOL isRunningInPhotosApp;
@property (class, readonly, nonatomic) BOOL isRunningInPhotosTopShelfExtension;

@property (readonly, nonatomic) UIApplication *application;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) BOOL isLaunchedForTesting;

- (id)initWithApplication:(id)a0;
- (void)setIsHidden:(BOOL)a0;
- (id)init;
- (void)_sceneDidActivate:(id)a0;
- (void)_sceneWillDeactivate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDisablingIdleTimerForReasons:(id *)a0;
- (void)_appDidHide:(id)a0;
- (void)_appDidUnhide:(id)a0;
- (id)beginDisablingIdleTimerForReason:(id)a0;
- (void)endDisablingIdleTimer:(id)a0;
- (id)initWithApplication:(id)a0 isExtension:(BOOL)a1;

@end
