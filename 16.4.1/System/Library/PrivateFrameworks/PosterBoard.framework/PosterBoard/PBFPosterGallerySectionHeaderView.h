@class UILabel, NSString;

@interface PBFPosterGallerySectionHeaderView : UICollectionReusableView {
    UILabel *_label;
    UILabel *_subtitleLabel;
}

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subtitle;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
