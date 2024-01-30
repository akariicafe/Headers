@class UIColor, NSString, _NTKColorManager;

@interface NTKColoringView : UIView <NTKColoringView> {
    _NTKColorManager *_colorManager;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUsesLegibility:(BOOL)a0;
- (BOOL)usesLegibility;

@end
