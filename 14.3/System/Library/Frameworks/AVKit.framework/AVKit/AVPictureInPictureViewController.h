@class AVPictureInPicturePlayerLayerView, NSString, AVPlayerController;
@protocol AVPictureInPictureViewControllerDelegate;

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController>

@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
@property (nonatomic) BOOL shouldShowAlternateActionButtonImage;
@property (weak, nonatomic) id<AVPictureInPictureViewControllerDelegate> delegate;
@property (retain, nonatomic) AVPictureInPictureViewController *contentViewController;
@property (readonly, nonatomic) BOOL shouldShowLoadingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)willAnimatePictureInPictureStart;
- (void)didAnimatePictureInPictureStop;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
