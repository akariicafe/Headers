@class NSString, PNPGradientView, UIView;

@interface PNPWizardInkWeightControl : UIView <PNPPencilInteractionEventDestination> {
    double _value;
    PNPGradientView *_gradient;
    UIView *_knob;
}

@property (readonly, nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)_knobColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(double)a0;
- (void)eventSource:(id)a0 hadPencilDoubleTapped:(id /* block */)a1;

@end
