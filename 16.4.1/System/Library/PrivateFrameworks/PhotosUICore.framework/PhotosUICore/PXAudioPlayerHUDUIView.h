@class UILabel, CADisplayLink, PXAudioPlayer;

@interface PXAudioPlayerHUDUIView : UIView {
    UILabel *_trackLabel;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) PXAudioPlayer *audioPlayer;

- (void)_updateDisplayLink;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_handleDisplayLink:(id)a0;
- (void).cxx_destruct;
- (void)_updateInfoText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 audioPlayer:(id)a1;

@end
