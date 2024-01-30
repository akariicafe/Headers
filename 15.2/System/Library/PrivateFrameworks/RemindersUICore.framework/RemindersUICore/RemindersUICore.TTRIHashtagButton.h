@class NSString;

@interface RemindersUICore.TTRIHashtagButton : UIButton {
    void /* unknown type, empty encoding */ focusDelegate;
    void /* unknown type, empty encoding */ isContextMenuTarget;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, copy) NSString *accessibilityLabel;

- (void)updateConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
