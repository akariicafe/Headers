@class UIImage, AKAuthorizationLoginChoice;

@interface AKAuthorizationLoginChoiceCell : UITableViewCell

@property (copy, nonatomic) AKAuthorizationLoginChoice *loginChoice;
@property (retain, nonatomic) UIImage *iconImage;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithLoginChoice:(id)a0 reuseIdentifier:(id)a1;
- (void)_setupFormat;
- (void)_setupContent;

@end
