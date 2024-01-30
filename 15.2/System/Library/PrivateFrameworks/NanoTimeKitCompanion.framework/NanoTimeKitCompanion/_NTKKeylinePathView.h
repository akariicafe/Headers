@class UIColor, NSString, NTKKeylineTouchable, UIBezierPath;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView> {
    UIBezierPath *_path;
    UIBezierPath *_secondPath;
}

@property (retain, nonatomic) NTKKeylineTouchable *touchable;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 secondPath:(id)a1 scale:(double)a2;

@end
