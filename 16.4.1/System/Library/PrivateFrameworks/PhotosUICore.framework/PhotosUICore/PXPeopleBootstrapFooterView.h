@class UILabel, NSString;

@interface PXPeopleBootstrapFooterView : UICollectionReusableView

@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (copy, nonatomic) NSString *descriptionText;

+ (id)_descriptionLabelFont;
+ (struct CGSize { double x0; double x1; })sizeForBoundingSize:(struct CGSize { double x0; double x1; })a0 descriptionText:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
