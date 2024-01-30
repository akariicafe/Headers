@class UIButton, UIImage, UIImageView;
@protocol SCKPAudioMessageViewDelegate;

@interface SCKPAudioMessageView : UIView {
    id<SCKPAudioMessageViewDelegate> _delegate;
    UIButton *_playButton;
    UIImage *_playImage;
    UIImage *_pauseImage;
    UIImageView *_waveformImageView;
}

@property (nonatomic) long long playButtonState;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_playButtonPressed:(id)a0;
- (id)initWithAudioMessageURL:(id)a0 delegate:(id)a1;

@end
