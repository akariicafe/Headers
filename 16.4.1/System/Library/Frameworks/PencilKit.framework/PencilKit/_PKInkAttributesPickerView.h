@class PKInk, NSString, _PKInkThicknessPicker, PKToolConfiguration, UIView, _PKColorAlphaSlider;
@protocol _PKInkAttributesPickerViewDelegate;

@interface _PKInkAttributesPickerView : UIView <_PKColorAlphaSliderDelegate>

@property (retain, nonatomic) _PKInkThicknessPicker *thicknessPicker;
@property (retain, nonatomic) _PKColorAlphaSlider *colorAlphaSlider;
@property (retain, nonatomic) PKToolConfiguration *toolConfiguration;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id<_PKInkAttributesPickerViewDelegate> delegate;
@property (retain, nonatomic) PKInk *ink;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) double minimumOpacityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_colorAlphaSliderUserDidEndDraggingSlider:(id)a0;
- (void)_colorAlphaSliderUserDidStartDraggingSlider:(id)a0;
- (void)_opacityValueChanged:(id)a0;
- (void)_thicknessValueChanged:(id)a0;
- (id)initWithInk:(id)a0 toolConfiguration:(id)a1;
- (void)setInk:(id)a0 animated:(BOOL)a1;

@end
