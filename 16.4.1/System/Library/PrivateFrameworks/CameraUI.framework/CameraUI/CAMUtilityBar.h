@class CEKApertureSlider, CEKWheelScrubberView, CEKSlider;

@interface CAMUtilityBar : UIView

@property (retain, nonatomic) CEKWheelScrubberView *filterScrubberView;
@property (retain, nonatomic) CEKApertureSlider *apertureSlider;
@property (retain, nonatomic) CEKSlider *intensitySlider;
@property (nonatomic) unsigned long long visibleContent;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_layoutFilterScrubberView;
- (void)_layoutPortraitApertureSlider;
- (void)_layoutSliderView:(id)a0;
- (void)_updateVisibilityForUpdatedContent:(unsigned long long)a0 contentView:(id)a1;
- (void)_updateVisibleViewAnimated:(BOOL)a0;
- (void)setVisibleContent:(unsigned long long)a0 animated:(BOOL)a1;

@end
