@class NSString;

@interface HealthExperienceUI.DataTypeDetailChartCell : UICollectionViewCell <HKOverlayRoomViewControllerLayoutDelegate> {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ chartViewController;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ separatorViewHeightConstraint;
}

@property (nonatomic, readonly) NSString *description;

- (void)overlayRoomViewControllerDidInvalidateLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
