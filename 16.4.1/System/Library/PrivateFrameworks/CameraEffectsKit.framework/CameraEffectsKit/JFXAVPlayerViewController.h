@class NSString, AVPlayer;

@interface JFXAVPlayerViewController : AVPlayerViewController <JFXAVPlayerViewer>

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } displaySize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) BOOL showAVControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureDisplayAttributesForColorSpace:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;

@end
