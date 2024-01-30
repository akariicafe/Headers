@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationCornerView : NTKRichComplicationCornerTextCustomView {
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (id)_outerView;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_applyPausedUpdate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)_updateInnerLabel;

@end
