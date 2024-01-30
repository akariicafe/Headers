@class UIKBUndoStyling, UIVisualEffectView, UIKBUndoControl, UIView, UILabel, NSDate;
@protocol UIInteractiveUndoHUDActionDelegate;

@interface UIKBUndoInteractionHUD : UIView

@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (retain, nonatomic) UIVisualEffectView *shadowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (retain, nonatomic) UIKBUndoControl *leftButtonView;
@property (retain, nonatomic) UIKBUndoControl *rightButtonView;
@property (retain, nonatomic) UIKBUndoControl *aCutButtonView;
@property (retain, nonatomic) UIKBUndoControl *aCopyButtonView;
@property (retain, nonatomic) UIKBUndoControl *aPasteButtonView;
@property (retain, nonatomic) UILabel *instructionalLabel;
@property (retain, nonatomic) NSDate *appearanceDate;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id<UIInteractiveUndoHUDActionDelegate> actionDelegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)controlForType:(long long)a0;
- (void)controlActionUpInside:(id)a0 forEvent:(id)a1;
- (BOOL)availableOfControl:(id)a0;
- (void)controlActionDown:(id)a0;
- (void)controlActionUpOutside:(id)a0;
- (id)createSeparatorView;
- (id)initWithKeyboardAppearance:(long long)a0 isRTL:(BOOL)a1 mode:(long long)a2 sceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (void)updateControlWithDirection:(long long)a0 travelProgress:(double)a1 isRTL:(BOOL)a2;
- (void)updateHUDControlState;

@end
