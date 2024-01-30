@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _prevLayoutBounds;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_updateRingWithTemplate:(id)a0;
- (void)_showEmptyViews;

@end
