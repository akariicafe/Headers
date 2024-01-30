@class UIColor, NSString, _UIColorWellConicalGradientBackgroundView, UIColorPickerViewController, UIDragInteraction, UIDropInteraction, UIButton;

@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, UIColorPickerViewControllerDelegate> {
    UIButton *_button;
    _UIColorWellConicalGradientBackgroundView *_gradientView;
    UIColorPickerViewController *_colorPicker;
    UIDragInteraction *_dragInteraction;
    UIDropInteraction *_dropInteraction;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL supportsAlpha;
@property (retain, nonatomic) UIColor *selectedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)_commonInit;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (void)_setSelectedColor:(id)a0 notifyingPicker:(BOOL)a1 sendingAction:(BOOL)a2;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (double)_widthForTraitCollection:(id)a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setPickerTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invokeColorPicker:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)encodeWithCoder:(id)a0;

@end
