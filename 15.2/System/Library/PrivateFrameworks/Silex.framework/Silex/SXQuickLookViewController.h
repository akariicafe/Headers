@class UIButton, NSString, UIImageView, UILabel, NFStateMachine, NFStateMachineState;
@protocol SXQuickLookEventHandler, SXQuickLookRenderer;

@interface SXQuickLookViewController : UIViewController <SXQuickLookEventHandlerDelegate>

@property (readonly, nonatomic) id<SXQuickLookEventHandler> eventHandler;
@property (readonly, nonatomic) id<SXQuickLookRenderer> renderer;
@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (readonly, nonatomic) NFStateMachineState *loadingState;
@property (readonly, nonatomic) NFStateMachineState *presentingState;
@property (readonly, nonatomic) NFStateMachineState *errorState;
@property (readonly, nonatomic) UIImageView *thumbnailImageView;
@property (readonly, nonatomic) UIButton *thumbnailControl;
@property (readonly, nonatomic) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleTap;
- (void)showThumbnailImage:(id)a0;
- (void)showThumbnailErrorWithMessage:(id)a0;
- (id)initWithEventHandler:(id)a0 renderer:(id)a1;
- (id)createLoadingState;
- (id)createErrorState;
- (id)createPresentingState;
- (void)configureStateMachine;

@end
