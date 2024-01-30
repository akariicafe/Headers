@class ASVLoadingView, UIImageView, UIImage, NSError, NSLayoutConstraint, ASVBadgeView;

@interface ASVThumbnailButton : UIButton {
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}

@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) NSError *error;

+ (id)thumbnailButton;

- (void).cxx_destruct;
- (void)_updateSubviewVisibility;
- (void)layoutSubviews;
- (void)_setupButton;
- (void)setHighlighted:(BOOL)a0;

@end
