@class NSString, UIActivityIndicatorView, NSArray, GKLoadableContentStateMachine;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate>

@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading;
@property (nonatomic) double loadingIndicatorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)showLoadingIndicator;
- (void)didExitLoadedState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)setViewsToHideHidden:(BOOL)a0;

@end
