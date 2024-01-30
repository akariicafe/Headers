@class UIBezierPath, CALayer;

@interface _UIRadiosityShadowView : UIView

@property (retain, nonatomic) UIBezierPath *shadowPath;
@property (retain, nonatomic) CALayer *punchoutLayer;
@property (nonatomic) BOOL needsPunchout;

- (id)initWithSourceView:(id)a0 shadowPath:(id)a1 isSoft:(BOOL)a2;
- (void).cxx_destruct;

@end
