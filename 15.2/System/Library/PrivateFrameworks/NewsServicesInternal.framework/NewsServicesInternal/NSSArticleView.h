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

- (void)layoutSubviews;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)_updateFonts;
- (double)calculateHeightForWidth:(double)a0;

@end
