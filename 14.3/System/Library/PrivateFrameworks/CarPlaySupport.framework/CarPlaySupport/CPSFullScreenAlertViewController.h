@class CPAlertTemplate, NSArray, NSString;

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate>

@property (readonly, nonatomic) CPAlertTemplate *alert;
@property (retain, nonatomic) NSArray *alertButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (id)_titleFont;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didSelectButton:(id)a0;
- (void)_viewDidLoad;
- (id)initWithAlert:(id)a0 alertDelegate:(id)a1 templateEnvironment:(id)a2;

@end
