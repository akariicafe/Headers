@class NSString, UIImageView, UILabel, UIView;

@interface AVExternalPlaybackIndicatorView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_containerView;
    NSString *_titleString;
    NSString *_subtitleString;
    BOOL _shouldShowIndicator;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setTitleString:(id)a0 subtitleString:(id)a1;

@end
