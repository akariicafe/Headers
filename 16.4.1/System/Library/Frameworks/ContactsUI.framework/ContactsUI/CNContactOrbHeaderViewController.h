@class NSArray, CNContactOrbHeaderView;

@interface CNContactOrbHeaderViewController : UIViewController

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) CNContactOrbHeaderView *headerView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithContacts:(id)a0;
- (double)suggestedHeaderWidth;

@end
