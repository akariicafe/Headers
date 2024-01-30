@class UISlider, NSString;
@protocol HUControlViewDelegate;

@interface HUSimpleSliderControlView : UIView <HUControlView>

@property (readonly, nonatomic) UISlider *slider;
@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL canBeHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)valueClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_sliderValueChanged:(id)a0;
- (void)_sliderTouchDown:(id)a0;
- (void)_sliderTouchUp:(id)a0;

@end
