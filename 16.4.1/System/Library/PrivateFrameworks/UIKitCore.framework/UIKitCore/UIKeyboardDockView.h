@class UIKeyboardDockItem;
@protocol UIKeyboardDockViewDelegate;

@interface UIKeyboardDockView : UIView <_UIViewRepresentingKeyboardLayout>

@property (weak, nonatomic) id<UIKeyboardDockViewDelegate> delegate;
@property (retain, nonatomic) UIKeyboardDockItem *leftDockItem;
@property (retain, nonatomic) UIKeyboardDockItem *rightDockItem;
@property (retain, nonatomic) UIKeyboardDockItem *centerDockItem;

+ (long long)_currentInterfaceOrientation;
+ (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })_itemFramesForBoundingSize:(struct CGSize { double x0; double x1; })a0;
+ (id)dockViewHomeGestureExclusionZones;

- (id)_keyboardLongPressInteractionRegions;
- (id)_keyboardLayoutView;
- (id)_dockItemWithButton:(id)a0;
- (void)_dockItemButtonWasTapped:(id)a0 withEvent:(id)a1;
- (void)_didReceiveHandBiasChangeNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_configureDockItem:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
