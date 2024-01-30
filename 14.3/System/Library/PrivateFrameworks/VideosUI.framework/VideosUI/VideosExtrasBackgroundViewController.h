@class MPUArtworkView, NSArray, IKImageElement, NSTimer, UIImageView;

@interface VideosExtrasBackgroundViewController : UIViewController {
    IKImageElement *_displayedImageElement;
    NSArray *_imageConstraints;
    MPUArtworkView *_imageView;
    NSTimer *_updateTimer;
    UIImageView *_vignetteView;
}

@property (readonly, nonatomic) NSArray *backgroundElements;
@property (nonatomic) unsigned long long vignetteType;

+ (id)vignetteImageForType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateImage;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_initVignette;
- (void)_scheduleTimerIfNeeded;
- (void)_didReceiveImage:(id)a0;
- (void)_updateConstraintsForImageSize:(struct CGSize { double x0; double x1; })a0 position:(unsigned long long)a1;
- (id)initWithBackgroundElement:(id)a0;
- (id)initWithBackgroundElements:(id)a0;

@end
