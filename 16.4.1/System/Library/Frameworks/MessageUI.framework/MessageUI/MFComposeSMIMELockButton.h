@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton {
    UIImageView *_lockedImageView;
    UIImageView *_unlockedImageView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) BOOL wantsEncryption;
@property (nonatomic) BOOL canEncrypt;

- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateButtonAppearance;
- (void)_closeLock;
- (void)_openLock;
- (void)_updateButtonAppearanceAnimated:(BOOL)a0;
- (void)setWantsEncryption:(BOOL)a0 canEncrypt:(BOOL)a1 animated:(BOOL)a2;

@end
