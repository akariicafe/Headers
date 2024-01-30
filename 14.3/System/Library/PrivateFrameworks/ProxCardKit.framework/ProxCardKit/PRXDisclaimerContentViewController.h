@class NSString, PRXDisclaimerContentView, PRXAction;

@interface PRXDisclaimerContentViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXDisclaimerContentView *contentView;
@property (copy, nonatomic) NSString *disclaimer;
@property (retain, nonatomic) PRXAction *moreInfoAction;

+ (Class)contentViewClass;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_updateDisclaimerLabel;
- (void)_updateMoreInfoButton;

@end
