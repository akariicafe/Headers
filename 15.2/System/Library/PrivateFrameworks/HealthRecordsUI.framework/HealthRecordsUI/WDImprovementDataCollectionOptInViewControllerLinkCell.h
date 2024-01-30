@class NSString, UIButton;

@interface WDImprovementDataCollectionOptInViewControllerLinkCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UIButton *linkButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setupLinkButton;

@end
