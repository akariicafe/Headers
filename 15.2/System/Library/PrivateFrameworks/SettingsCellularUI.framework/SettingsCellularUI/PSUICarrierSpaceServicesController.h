@class NSArray;

@interface PSUICarrierSpaceServicesController : PSListController

@property (retain, nonatomic) NSArray *appsList;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)simStatusChanged;
- (void)carrierSpaceChanged;
- (id)primaryAppSpecifier;
- (BOOL)shouldShowMoreApps;
- (void)moreAppsTapped:(id)a0;

@end
