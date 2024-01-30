@class NSString, UIActivityIndicatorView, NSArray, GKLoadableContentStateMachine;

@interface GKLoadableContentViewController : GKViewController <_GKStateMachineDelegate>

@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading;
@property (nonatomic) double loadingIndicatorDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)didEnterLoadedState;
- (void)didExitLoadedState;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;

@end
