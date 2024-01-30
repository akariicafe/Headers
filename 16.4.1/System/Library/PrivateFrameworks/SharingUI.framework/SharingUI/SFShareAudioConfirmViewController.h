@class MTMaterialView, UIImageView, SFMediaPlayerView, UIButton;

@interface SFShareAudioConfirmViewController : SFShareAudioBaseViewController {
    MTMaterialView *_confirmButtonMaterialView;
}

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) SFMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateDeviceVisual:(id)a0;
- (void)eventCancel:(id)a0;
- (void)eventConfirm:(id)a0;

@end
