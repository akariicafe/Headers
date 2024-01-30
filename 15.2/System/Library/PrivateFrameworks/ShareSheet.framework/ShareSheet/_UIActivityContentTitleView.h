@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) NSLayoutConstraint *linkTrailingAnchor;
@property (retain, nonatomic) LPLinkView *linkView;
@property (nonatomic) BOOL photosCarouselMode;

- (void)layoutSubviews;
- (void)contentDidChange;
- (void)_updateContent;
- (void).cxx_destruct;
- (long long)preferredContentSizeForSize:(long long)a0;

@end
