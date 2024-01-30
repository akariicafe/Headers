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

- (void)setViewsToHideHidden:(BOOL)a0;
- (void)dealloc;
- (void)didEnterLoadedState;
- (void)didExitLoadedState;
- (void)showLoadingIndicator;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;

@end
