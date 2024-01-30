@class UIImageView, UILabel, UIView, NSSArticleInternal;

@interface NSSArticleView : UIView

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *excerptLabel;
@property (weak, nonatomic) UIImageView *thumbnailImageView;
@property (weak, nonatomic) UIView *thumbnailContainerView;
@property (weak, nonatomic) UILabel *publisherLabel;
@property (weak, nonatomic) UILabel *dateLabel;
@property (weak, nonatomic) UIImageView *publisherLogoImageView;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) NSSArticleInternal *article;

- (void)_updateFonts;
- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)calculateHeightForWidth:(double)a0;

@end
