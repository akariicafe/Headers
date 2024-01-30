@class CAPackage, CAStateController, UIView, CALayer, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView {
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
}

@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CCUICAPackageDescription *packageDescription;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (void)_setPackage:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStateName:(id)a0;

@end
