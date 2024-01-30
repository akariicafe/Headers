@class NSArray, NSString, UIView;

@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable>

@property (retain, nonatomic) UIView *headerContentView;
@property (retain, nonatomic) NSArray *dataViews;
@property (nonatomic) BOOL headerOnLeading;
@property (nonatomic) double headerWidth;
@property (nonatomic) double headerMaxWidth;
@property (nonatomic) double headerMinWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerMargin;
@property (nonatomic) double normalizedHeaderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoCellViewWithElement:(id)a0 existingView:(id)a1;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)impressionableElementsContainedInDocument:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 withHeaderWidth:(double)a1;
- (double)minimumHeaderWidth;

@end
