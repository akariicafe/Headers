@class NSArray, CNContactOrbHeaderView;

@interface CNContactOrbHeaderViewController : UIViewController

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) CNContactOrbHeaderView *headerView;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithContacts:(id)a0;
- (double)suggestedHeaderWidth;

@end
