@class NSString, UIImageView, BTMediaPlayerView, UIButton;

@interface BTShareAudioConfirmViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) BTMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (nonatomic) unsigned int colorCode;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned int productID;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateDeviceVisual:(id)a0;
- (void)eventCancel:(id)a0;
- (void)eventPermanentButton:(id)a0;
- (void)eventTemporarilyShareButton:(id)a0;

@end
