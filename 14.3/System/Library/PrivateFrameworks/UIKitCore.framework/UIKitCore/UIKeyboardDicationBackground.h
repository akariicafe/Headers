@class UIKeyboardDicationBackgroundGradientView, NSArray;

@interface UIKeyboardDicationBackground : UIView {
    NSArray *_shadows;
}

@property (retain, nonatomic) UIKeyboardDicationBackgroundGradientView *gradient;

- (id)shadows;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
