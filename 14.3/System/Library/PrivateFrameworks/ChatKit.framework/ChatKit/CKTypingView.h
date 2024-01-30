@class CALayer, CKBaseLayer;
@protocol IMTypingIndicatorLayerProtocol;

@interface CKTypingView : UIView

@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;
@property (retain, nonatomic) CKBaseLayer *baseLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
