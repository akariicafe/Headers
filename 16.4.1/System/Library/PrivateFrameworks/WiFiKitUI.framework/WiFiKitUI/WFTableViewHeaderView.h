@class UILabel, NSString, UIActivityIndicatorView;

@interface WFTableViewHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL animating;

- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_configureContents;

@end
