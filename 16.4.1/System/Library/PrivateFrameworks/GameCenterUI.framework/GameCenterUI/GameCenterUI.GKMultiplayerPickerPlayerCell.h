@class NSString;

@interface GameCenterUI.GKMultiplayerPickerPlayerCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ lockupView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

+ (struct CGSize { double x0; double x1; })preferredSizeFitting:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)applyWithPlayer:(id)a0 isCoreRecent:(BOOL)a1;

@end
