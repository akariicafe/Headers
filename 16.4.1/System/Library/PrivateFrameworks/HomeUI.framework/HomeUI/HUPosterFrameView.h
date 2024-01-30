@class CALayer, HMCameraClip;

@interface HUPosterFrameView : UIView <HFCameraImageObserver, HFCameraPosterFrameDelegate>

@property (nonatomic) BOOL loadingHeroFrame;
@property (nonatomic) BOOL loadingPosterFrame;
@property (nonatomic) unsigned long long posterFrameLoadingState;
@property (retain, nonatomic) CALayer *posterFrameLayer;
@property (retain, nonatomic) CALayer *lineSeparator;
@property (weak, nonatomic) HMCameraClip *clip;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL shouldShowLineSeparator;

+ (id)posterFrameViewForWidth:(double)a0;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didFindPosterFrame:(id)a0 atOffset:(double)a1 forClip:(id)a2;
- (void)displayImage:(id)a0 opacity:(double)a1;
- (void)displayImageForClip:(id)a0 atTimeOffset:(double)a1;
- (void)failedToFindPosterFrameAtOffset:(double)a0 forClip:(id)a1;
- (void)loadPlaceholderHeroFrameImageForClip:(id)a0;
- (void)loadPosterFrameImageForClip:(id)a0 atOffset:(double)a1;
- (void)manager:(id)a0 didFindHeroFrame:(id)a1 forClip:(id)a2;
- (void)manager:(id)a0 didFindImage:(id)a1 atTimeOffset:(double)a2 forClip:(id)a3;
- (void)manager:(id)a0 didGenerateImage:(id)a1 atOffset:(double)a2 forClip:(id)a3;
- (void)manager:(id)a0 failedToFindHeroFrameforClip:(id)a1;
- (void)manager:(id)a0 failedToGenerateImageAtOffset:(double)a1 forClip:(id)a2;

@end
