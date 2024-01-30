@class NSMutableDictionary, UIBarButtonItem, AVEditBehaviorParameters, AVObservationController, NSMutableArray, AVEditView, UIView, AVEditBehavior, NSString, AVAssetImageGenerator, UIToolbar, AVZoomingBehavior, AVPlayerViewController, AVPlayerController;

@interface AVEditBehaviorContext : NSObject <AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVEditViewDataSource, AVEditViewDelegate, AVBehaviorContext>

@property (weak, nonatomic) AVEditBehavior *behavior;
@property (retain, nonatomic) AVZoomingBehavior *zoomingBehavior;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVEditView *editView;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) id playerTimeObserver;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceItem;
@property (retain, nonatomic) UIBarButtonItem *playButton;
@property (retain, nonatomic) UIBarButtonItem *pauseButton;
@property (readonly, nonatomic) NSMutableArray *pendingImageRequests;
@property (readonly, nonatomic) NSMutableDictionary *requestedImageTimeToCMTimeMap;
@property (nonatomic) unsigned long long currentRotation;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rotationTransform;
@property (readonly, copy, nonatomic) AVEditBehaviorParameters *parameters;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done:(id)a0;
- (void)cancel:(id)a0;
- (void)pause:(id)a0;
- (void)dealloc;
- (void)play:(id)a0;
- (void)endEditing;
- (void).cxx_destruct;
- (void)rotateClockwise;
- (void)didAddBehavior:(id)a0;
- (id)videoCompostitionRotatingAsset:(id)a0;
- (void)_generateThumbnails;
- (id)_makeBarButtonItems;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withCoordinator:(id)a1;
- (void)didRemoveBehavior:(id)a0;
- (void)editView:(id)a0 currentTimeDidChange:(double)a1;
- (void)editView:(id)a0 requestThumbnailImageForTimestamp:(id)a1;
- (void)editView:(id)a0 trimEndTimeDidChange:(double)a1;
- (void)editView:(id)a0 trimStartTimeDidChange:(double)a1;
- (void)editViewDidBeginScrubbing:(id)a0;
- (void)editViewDidEndScrubbing:(id)a0;
- (void)editViewDidFinishRequestingThumbnails:(id)a0;
- (double)editViewDuration:(id)a0;
- (double)editViewThumbnailAspectRatio:(id)a0;
- (void)editViewWillBeginRequestingThumbnails:(id)a0;
- (id)initWithAVKitOwner:(id)a0;
- (void)startEditing;
- (void)willAddBehavior:(id)a0;
- (void)willRemoveBehavior:(id)a0;

@end
