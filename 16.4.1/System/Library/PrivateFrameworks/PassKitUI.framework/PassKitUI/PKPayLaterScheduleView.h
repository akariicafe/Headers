@class NSArray, PKPayLaterDynamicContentPageItem;

@interface PKPayLaterScheduleView : UIView {
    NSArray *_horizontalStacks;
    double _minimimLeadingLabelWidth;
}

@property (retain, nonatomic) PKPayLaterDynamicContentPageItem *dynamicContentItem;

+ (BOOL)canFormScheduleViewForDynamincContentItem:(id)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (double)_minimumRequiredWidthForLeadingLabels;
- (id)initWithDynamicContentItem:(id)a0;

@end
