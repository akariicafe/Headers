@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)_setupContentViewForFamily:(long long)a0;

@end
