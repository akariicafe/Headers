@class UILabel, UIImageView, NSURL;

@interface NUArticleExcerptReadMoreButton : UIButton

@property (readonly, nonatomic) UILabel *readStoryLabel;
@property (readonly, nonatomic) UILabel *domainLabel;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) unsigned long long excerptLenthType;
@property (retain, nonatomic) NSURL *domainURL;

+ (id)arrowImage;
+ (double)readMoreButtonHeight;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)accessibilityUserInputLabels;
- (void).cxx_destruct;
- (id)_nonEmptyLabelTextStringsInDisplayOrder;

@end
