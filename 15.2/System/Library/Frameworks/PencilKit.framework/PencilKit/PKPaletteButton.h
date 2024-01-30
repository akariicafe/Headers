@class UIMenu, NSString, NSHashTable, UIButton;
@protocol PKPaletteButtonDelegate;

@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) id<PKPaletteButtonDelegate> delegate;
@property (retain, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL useCompactLayout;
@property (nonatomic) double scalingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plusButton;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)undoButton;
+ (id)ellipsisButton;
+ (id)redoButton;
+ (id)keyboardButton;
+ (id)returnKeyButton;
+ (id)UCBButton;
+ (id)emojiKeyboardButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithImage:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateUI;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_backgroundColor;
- (void)removeIntrinsicContentSizeObserver:(id)a0;
- (void)addIntrinsicContentSizeObserver:(id)a0;
- (id)_tintColorForCurrentState;
- (BOOL)_wantsCustomTintColor;
- (BOOL)_wantsCustomBackgroundColor;
- (void)_notifyIntrinsicContentSizeDidChange;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_buttonTransform;

@end
