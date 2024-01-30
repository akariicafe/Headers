@class NSArray;

@interface SeymourUI.PaletteContainerView : UIView {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ contentInsets;
}

@property (nonatomic, copy) NSArray *interactions;

- (void)addInteraction:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)removeInteraction:(id)a0;

@end
