@class TintColorUpdateView, NSObject;
@protocol EKUITintColorUpdateDelegate;

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {
    TintColorUpdateView *_updateView;
}

@property (weak, nonatomic) NSObject<EKUITintColorUpdateDelegate> *tintColorDelegate;

- (void)viewTintColorDidChangeForView:(id)a0 toColor:(id)a1;
- (void).cxx_destruct;
- (void)subTintColorUpdatedToColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
