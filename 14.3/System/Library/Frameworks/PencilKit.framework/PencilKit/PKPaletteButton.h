@class UIButton, NSString, NSHashTable;

@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL useCompactLayout;
@property (nonatomic) double scalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)undoButton;
+ (id)plusButton;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)keyboardButton;
+ (id)returnKeyButton;
+ (id)redoButton;
+ (id)ellipsisButton;
+ (id)UCBButton;
+ (id)emojiKeyboardButton;

- (id)initWithImage:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)_updateUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)_backgroundColor;
- (void)removeIntrinsicContentSizeObserver:(id)a0;
- (void)addIntrinsicContentSizeObserver:(id)a0;
- (id)_tintColorForCurrentState;
- (void)_notifyIntrinsicContentSizeDidChange;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_buttonTransform;

@end
