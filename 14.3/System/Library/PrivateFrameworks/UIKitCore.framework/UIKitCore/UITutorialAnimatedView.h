@class CAPackage, CALayer;

@interface UITutorialAnimatedView : UIView {
    CALayer *_packageLayer;
}

@property (nonatomic) long long appearance;
@property (retain, nonatomic) CAPackage *package;

- (void).cxx_destruct;
- (void)_setPackage:(id)a0;
- (id)initWithKeyboardAppearance:(long long)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
