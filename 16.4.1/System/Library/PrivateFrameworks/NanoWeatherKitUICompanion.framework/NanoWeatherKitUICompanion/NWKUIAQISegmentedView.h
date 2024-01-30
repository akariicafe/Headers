@class NSArray, NWKUIAQISegmentedModel;

@interface NWKUIAQISegmentedView : UIView {
    struct { double width; } _constraints;
    double _lastLayoutHeight;
    NSArray *_segmentViews;
}

@property (readonly) NWKUIAQISegmentedModel *model;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateModel:(id)a0;
- (void)_addSubviewsFromModel:(id)a0;
- (id)initWithModel:(id)a0 constraints:(struct { double x0; })a1;

@end
