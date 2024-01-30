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

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didAnimatePictureInPictureStop;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;
- (void)dealloc;
- (void)willAnimatePictureInPictureStart;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;

@end
