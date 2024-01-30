@class UIColor, NSString, UIColorPickerViewController, UIDragInteraction, _UIColorWellVisualStyle, UIDropInteraction;

@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, UIColorPickerViewControllerDelegate, _UIColorWellControl> {
    _UIColorWellVisualStyle *_style;
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

+ (id)styleForColorWell:(id)a0;

- (void)layoutSubviews;
- (void)_setSelectedColor:(id)a0 notifyingStyle:(BOOL)a1 notifyingUIPicker:(BOOL)a2 sendingAction:(BOOL)a3;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)styleRequestedColorPickerPresentation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)setPickerTitle:(id)a0;
- (void)styleDidSelectColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;

@end
