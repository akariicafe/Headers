@class NSSet, HUInformationalServiceGridViewController, HFItem, UILabel, NSLayoutConstraint;

@interface HUSoftwareUpdateLockupView : HULockupView {
    HFItem *_item;
}

@property (retain, nonatomic) UILabel *tertiaryDetailLabel;
@property (retain, nonatomic) NSLayoutConstraint *serviceGridHeightConstraint;
@property (retain, nonatomic) NSSet *affectedAccessories;
@property (nonatomic) BOOL isObservingPreferredContentSize;
@property (retain, nonatomic) HUInformationalServiceGridViewController *serviceGridViewController;

- (void)setItem:(id)a0;
- (id)item;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateUIWithAnimation:(BOOL)a0;
- (id)initializeIconViewWithSize:(unsigned long long)a0;
- (void)updateIconView:(id)a0 animate:(BOOL)a1;

@end
