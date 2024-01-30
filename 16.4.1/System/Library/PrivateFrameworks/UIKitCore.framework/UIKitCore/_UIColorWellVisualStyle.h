@class UIColor, NSString;
@protocol _UIColorWellControl;

@interface _UIColorWellVisualStyle : UIView

@property (weak, nonatomic) id<_UIColorWellControl> colorWell;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) NSString *pickerTitle;
@property (nonatomic) BOOL supportsAlpha;
@property (nonatomic) BOOL wantsSystemDragAndDrop;
@property (nonatomic) BOOL wantsExtraTouchInsets;

- (struct CGSize { double x0; double x1; })intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithColorWell:(id)a0;
- (void)setSelectedColor:(id)a0 notifyingPicker:(BOOL)a1;

@end
