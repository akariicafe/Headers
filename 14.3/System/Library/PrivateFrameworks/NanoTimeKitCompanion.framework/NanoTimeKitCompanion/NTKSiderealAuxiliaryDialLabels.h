@class NSString, CAShapeLayer, NSMutableDictionary, UIView, CLKDevice, NTKCurvedColoringLabel;

@interface NTKSiderealAuxiliaryDialLabels : UIView {
    CLKDevice *_device;
    UIView *_topLabelContainerView;
    CAShapeLayer *_topLabelMask;
    NTKCurvedColoringLabel *_topLabel;
    UIView *_bottomLabelContainerView;
    CAShapeLayer *_bottomLabelMask;
    NTKCurvedColoringLabel *_bottomLabel;
    NSMutableDictionary *_fontSizeCache;
}

@property (retain, nonatomic) NSString *topText;
@property (retain, nonatomic) NSString *bottomText;

- (void)setup;
- (void)_layoutBottomLabel;
- (void).cxx_destruct;
- (void)willStartTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)_curvedLabel;
- (void)applyTransitionFraction:(double)a0;
- (void)_layoutTopLabel;
- (void)_layoutLabel:(id)a0 text:(id)a1 monospaced:(BOOL)a2 offset:(struct CGPoint { double x0; double x1; })a3 useCache:(BOOL)a4;
- (void)_setFontSize:(double)a0 monospaced:(BOOL)a1 offset:(struct CGPoint { double x0; double x1; })a2 onLabel:(id)a3;
- (void)didFinishTransition;

@end
