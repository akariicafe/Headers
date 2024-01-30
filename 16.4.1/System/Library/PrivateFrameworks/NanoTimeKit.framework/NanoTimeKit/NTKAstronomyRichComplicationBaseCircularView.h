@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (void)setEditing:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (void)_applyPausedUpdate;
- (long long)_desaturatedFilterStyle;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_setupContentViewForFamily:(long long)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
