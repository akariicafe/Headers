@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKWellnessRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

- (void).cxx_destruct;
- (id)_outerView;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_showEmptyViewsWithString:(id)a0 shortText:(id)a1;
- (void)_updateRingWithTemplate:(id)a0;
- (void)_updateLabelWithTemplate:(id)a0;

@end
