@class UILabel, NSString;
@protocol HFIconDescriptor;

@interface HURoomListItemCell : UITableViewCell

@property (readonly, nonatomic) UILabel *nameLabel;
@property (copy, nonatomic) NSString *roomName;
@property (retain, nonatomic) id<HFIconDescriptor> roomIconDescriptor;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
