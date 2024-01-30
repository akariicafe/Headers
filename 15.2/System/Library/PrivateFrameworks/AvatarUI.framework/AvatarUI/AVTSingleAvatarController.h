@class _AVTAvatarRecordImageProvider, NSString, AVTImageTransitioningContainerView, AVTAdaptativeLayoutView, AVTRenderingScope, AVTViewSession;
@protocol AVTTransition, AVTPresenterDelegate, AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTUILogger;

@interface AVTSingleAvatarController : NSObject <AVTAvatarTransitionModel, AVTAvatarDisplayingController>

@property (retain, nonatomic) AVTAdaptativeLayoutView *view;
@property (retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer;
@property (retain, nonatomic) id<AVTAvatarRecord> displayedRecord;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer;
@property (readonly, nonatomic) AVTRenderingScope *renderingScope;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (retain, nonatomic) id<AVTTransition> currentTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarDisplayingControllerDelegate> delegate;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;

- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)a0 environment:(id)a1;
- (BOOL)isViewLoaded;
- (void)loadView;
- (void).cxx_destruct;
- (id)liveView;
- (void)prepareViewWithLayout:(id)a0;
- (void)stopUsingAVTViewSessionSynchronously:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)useAVTViewFromSession:(id)a0 withLayout:(id)a1;
- (void)prepareToTransitionToVisible:(BOOL)a0 completionHandler:(id /* block */ *)a1;
- (void)displayAvatarForRecord:(id)a0 animated:(BOOL)a1;
- (void)transitionStaticViewToFront;
- (void)transitionLiveViewToFront;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (void)updateImageViewWithDisplayedRecord;
- (void)transitionToShowingDisplayedRecordWithCompletionHandler:(id /* block */)a0;
- (void)updateImageViewWithAVTViewSnapshot;
- (void)transitionToOtherDisplayedRecord;

@end
