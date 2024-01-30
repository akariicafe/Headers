@class UISlider;

@interface PRRESliderTableViewCell : PRRETableViewCell {
    UISlider *_slider;
}

- (void)_configure;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_currentValue;
- (void)_setCurrentValue:(id)a0;

@end
