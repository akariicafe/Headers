@interface AssetViewer.ScrubberView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playPauseButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skipBackButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_skipForwardButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_elapsedTimeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remainingTimeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_elapsedTimeFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remainingTimeFormatter;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ timing;
    void /* unknown type, empty encoding */ lastLayoutBounds;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)startScrubbing:(id)a0;
- (void)didScrub:(id)a0;
- (void)handlePlayPauseButton:(id)a0;
- (void)handleSkipBackButton:(id)a0;
- (void)handleSkipForwardButton:(id)a0;
- (void)stopScrubbing:(id)a0;
- (void)updateTimeLabelFonts;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
