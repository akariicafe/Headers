@class UIView;

@interface VideosUI.InlinePlaybackView : VUIBaseView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ playbackView;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ focusSizeIncrease;
    void /* unknown type, empty encoding */ transitionAnimationDuration;
}

@property (nonatomic, readonly) UIView *accessibilityImageView;
@property (nonatomic, readonly) UIView *accessibilityPlaybackView;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
