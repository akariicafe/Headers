@class CALayer, HMCameraClip, UIActivityIndicatorView;

@interface HUPosterFrameView : UIView <HFCameraImageObserver>

@property (nonatomic, getter=isRequestInProgress) BOOL requestInProgress;
@property (retain, nonatomic) UIActivityIndicatorView *inProgressSpinner;
@property (retain, nonatomic) CALayer *posterFrameLayer;
@property (retain, nonatomic) CALayer *lineSeparator;
@property (weak, nonatomic) HMCameraClip *clip;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL displayingHeroFrame;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) BOOL shouldShowLineSeparator;

+ (id)posterFrameViewForWidth:(double)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)manager:(id)a0 didFindHeroFrame:(id)a1 forClip:(id)a2;
- (void)manager:(id)a0 failedToFindHeroFrameforClip:(id)a1;
- (void)manager:(id)a0 didFindImage:(id)a1 atTimeOffset:(double)a2 forClip:(id)a3;
- (void)manager:(id)a0 didFinishGeneratingImagesForObserver:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayHeroFrameForClip:(id)a0;
- (void)displayImageForClip:(id)a0 atTimeOffset:(double)a1;
- (void)displayImage:(id)a0;

@end
