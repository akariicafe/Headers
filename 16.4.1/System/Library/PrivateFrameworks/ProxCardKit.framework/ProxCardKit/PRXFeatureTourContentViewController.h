@class PRXLabel, NSString;

@interface PRXFeatureTourContentViewController : PRXCardContentViewController

@property (retain, nonatomic) PRXLabel *titleView;
@property (retain, nonatomic) PRXLabel *bodyView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) BOOL shouldCenterAlignText;

- (void)viewDidLoad;
- (void).cxx_destruct;

@end
