@class NSString, UILabel;

@interface SKUIReviewInAppRatingButtonViewController : UIViewController

@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(unsigned long long)a1;
- (void)viewDidLoad;

@end
