@class UIButton, UIImageView, SFMediaPlayerView, UIView, UIActivityIndicatorView, UILabel;

@interface SFShareAudioConnectingViewController : SFShareAudioBaseViewController {
    unsigned int _productIDActive;
}

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) SFMediaPlayerView *productMovieView;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIActivityIndicatorView *progressActivity;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic) unsigned int productID;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateDeviceVisual:(id)a0;
- (void)_updateForDeviceInfo;
- (void)eventCancel:(id)a0;
- (void)sessionProgressEvent:(int)a0 info:(id)a1;

@end
