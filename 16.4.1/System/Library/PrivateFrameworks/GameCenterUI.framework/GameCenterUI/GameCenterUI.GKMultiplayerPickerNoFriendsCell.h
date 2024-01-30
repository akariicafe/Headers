@class NSString;

@interface GameCenterUI.GKMultiplayerPickerNoFriendsCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ noFriendsView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) id /* block */ addFriendsHandler;

+ (double)itemHeightFitting:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
