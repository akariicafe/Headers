@class UILabel, UIImageView, NSURL;

@interface NUArticleExcerptReadMoreButton : UIButton

@property (readonly, nonatomic) UILabel *readStoryLabel;
@property (readonly, nonatomic) UILabel *domainLabel;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) unsigned long long excerptLenthType;
@property (retain, nonatomic) NSURL *domainURL;

+ (id)arrowImage;
+ (double)readMoreButtonHeight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
