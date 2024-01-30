@class NSString, UICellAccessoryLabel;

@interface MFTimezoneCollectionViewCell : UICollectionViewListCell

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (retain, nonatomic) UICellAccessoryLabel *timeZoneLabel;
@property (retain, nonatomic) NSString *currentCityName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureWithCityName:(id)a0;

@end
