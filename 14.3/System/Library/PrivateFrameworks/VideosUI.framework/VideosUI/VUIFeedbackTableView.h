@class VUIFeedbackTableLayout, NSArray, NSString;

@interface VUIFeedbackTableView : UIView <VUILabelBaselineProtocol>

@property (retain, nonatomic) VUIFeedbackTableLayout *layout;
@property (retain, nonatomic) NSArray *dataModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (void)prepareForCellReuse;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (struct CGSize { double x0; double x1; })_calculateMaxDescriptionThatFit:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_calculateMaxHeaderThatFits:(struct CGSize { double x0; double x1; })a0;

@end
