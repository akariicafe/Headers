@class NSString, WFHomeManager;
@protocol WFAutomationTypeChooserViewControllerDelegate;

@interface WFAutomationTypeChooserViewController : UITableViewController <WFHomeManagerEventObserver>

@property (readonly, nonatomic) WFHomeManager *homeManager;
@property (weak, nonatomic) id<WFAutomationTypeChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)automationTypeForHomeManager:(id)a0;

- (void)homeManagerDidUpdateHomes:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithHomeManager:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (void)chooseHomeAutomation:(id)a0;
- (void)choosePersonalAutomation:(id)a0;

@end
