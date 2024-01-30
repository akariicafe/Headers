@class NSString, PKLinkedApplication, WLEasyToHitCustomButton, UIImage;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver> {
    WLEasyToHitCustomButton *_iconButton;
    UIImage *_iconImage;
}

@property (readonly, nonatomic) PKLinkedApplication *linkedApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)tapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithLinkedApplication:(id)a0;
- (void)linkedApplicationDidChangeState:(id)a0;
- (void)_updateWithIconImage:(id)a0 animated:(BOOL)a1;

@end
