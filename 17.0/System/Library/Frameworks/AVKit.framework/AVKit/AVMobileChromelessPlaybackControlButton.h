@class UIView, UIViewPropertyAnimator, AVMobileChromelessControlsStyleSheet;

@interface AVMobileChromelessPlaybackControlButton : AVButton {
    unsigned long long _playbackControlButtonType;
    UIView *_highlightView;
    UIViewPropertyAnimator *_highlightAnimator;
}

@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;

+ (id)backwardSecondaryButtonWithStyleSheet:(id)a0;
+ (id)buttonWithAccessibilityIdentifier:(id)a0 withStyleSheet:(id)a1 withPlaybackControlButtonType:(unsigned long long)a2;
+ (id)forwardSecondaryButtonWithStyleSheet:(id)a0;
+ (id)playPauseButtonWithStyleSheet:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
