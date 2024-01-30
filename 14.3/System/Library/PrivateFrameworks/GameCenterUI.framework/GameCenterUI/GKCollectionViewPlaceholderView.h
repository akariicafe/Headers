@class GKPlaceholderContentStateMachine, NSArray, UIActivityIndicatorView, GKPlaceholderView, NSString;

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <_GKStateMachineDelegate>

@property (retain, nonatomic) GKPlaceholderView *placeholderView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) GKPlaceholderContentStateMachine *loadingMachine;
@property (retain, nonatomic) NSArray *cachedConstraints;
@property (retain, nonatomic) NSString *loadingState;
@property (retain, nonatomic) NSString *noContentTitle;
@property (retain, nonatomic) NSString *noContentMessage;
@property (retain, nonatomic) NSString *noContentButtonTitle;
@property (nonatomic) id noContentButtonTarget;
@property (nonatomic) SEL noContentButtonAction;
@property (retain, nonatomic) NSString *errorTitle;
@property (retain, nonatomic) NSString *errorMessage;
@property (nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateConstraints;
- (id)loadingState;
- (void)setLoadingState:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonPressed;
- (void)delayedShowLoadingIndicator;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterNoContentState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didExitErrorState;

@end
