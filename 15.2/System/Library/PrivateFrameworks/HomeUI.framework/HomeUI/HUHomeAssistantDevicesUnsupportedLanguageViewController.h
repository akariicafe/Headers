@class NSArray, OBTrayButton, NSString, NSLayoutConstraint;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)_continue;
- (id)hu_preloadContent;
- (id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)a0 home:(id)a1;

@end
