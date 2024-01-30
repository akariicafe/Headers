@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) NSLayoutConstraint *linkTrailingAnchor;
@property (retain, nonatomic) LPLinkView *linkView;
@property (nonatomic) BOOL photosCarouselMode;

- (long long)preferredContentSizeForSize:(long long)a0;
- (void)contentDidChange;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
