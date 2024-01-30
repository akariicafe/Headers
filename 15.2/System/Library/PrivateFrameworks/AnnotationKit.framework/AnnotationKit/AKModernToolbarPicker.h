@class AKController, UIStackView;

@interface AKModernToolbarPicker : UIControl

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) UIStackView *stackview;
@property (nonatomic) long long currentTag;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 controller:(id)a1;
- (void)revalidateItems:(id)a0;

@end
