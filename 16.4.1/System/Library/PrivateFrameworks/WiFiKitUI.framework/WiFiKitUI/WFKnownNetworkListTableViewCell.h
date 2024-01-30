@class NSString, UIImageView, UILabel, NSLayoutConstraint;

@interface WFKnownNetworkListTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *networkNameLabel;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) NSLayoutConstraint *extraLeadingConstraints;
@property (retain, nonatomic) NSLayoutConstraint *normalLeadingConstraints;
@property (retain, nonatomic) NSString *networkName;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL hasLeadingPadding;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
