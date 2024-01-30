@class NSString;

@interface HUCharacteristicStateCell : UITableViewCell

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *valueText;
@property (nonatomic) BOOL enabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
