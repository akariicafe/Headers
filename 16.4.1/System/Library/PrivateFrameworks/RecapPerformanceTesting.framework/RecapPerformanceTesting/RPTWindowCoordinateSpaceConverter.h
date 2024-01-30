@class UIScreen, UIWindow;

@interface RPTWindowCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIScreen *screen;
@property (retain, nonatomic) id nsScreen;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })convertSize:(struct CGSize { double x0; double x1; })a0;
- (id)initFromWindow:(id)a0 toScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGVector { double x0; double x1; })convertVector:(struct CGVector { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
