@class UIBezierPath, CALayer;

@interface _UIRadiosityShadowView : UIView

@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (retain, nonatomic) CALayer *punchoutLayer;
@property (nonatomic) BOOL needsPunchout;

- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0 shadowPath:(id)a1 isSoft:(BOOL)a2;

@end
