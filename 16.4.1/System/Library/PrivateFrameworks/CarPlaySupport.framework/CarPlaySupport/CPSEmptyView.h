@class CPSAbridgableLabel, NSArray;

@interface CPSEmptyView : UIView

@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel;
@property (copy, nonatomic) NSArray *titleVariants;
@property (copy, nonatomic) NSArray *subtitleVariants;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateLabelTraits;

@end
