@class UIView;
@protocol TFFeedbackDataUpdateProxy;

@interface TFFeedbackFormBaseCell : UITableViewCell <TFFeedbackDataDisplayable>

@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (weak, nonatomic) id<TFFeedbackDataUpdateProxy> updateProxy;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;

+ (struct CGSize { double x0; double x1; })sizeForEntry:(id)a0 dataSource:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 inTraitEnvironment:(id)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrameForTop:(BOOL)a0 inLayoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setupSeparatorViewsForAppearingInSectionLocation:(int)a0;
- (id)_createSeparatorSubview;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataString:(id)a0;
- (void)setDisplayedDataNumber:(id)a0;
- (void)setDisplayedDataGroupInclusionBool:(BOOL)a0;
- (void)setDisplayedDataImageCollection:(id)a0;
- (void)applyContentsOfEntry:(id)a0;
- (void)prepareSeparatorsForCellInSectionLocation:(int)a0;

@end
