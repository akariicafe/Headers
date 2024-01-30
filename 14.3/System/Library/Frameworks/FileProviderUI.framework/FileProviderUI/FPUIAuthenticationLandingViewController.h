@class NSString, UITextField, NSURL, NSArray, FPUIAuthenticationSectionDescriptor, NSMutableArray;

@interface FPUIAuthenticationLandingViewController : FPUIAuthenticationTableViewController <UITextFieldDelegate, FPUIAuthenticationServerInfoDelegate> {
    FPUIAuthenticationSectionDescriptor *_recentServersSection;
    NSMutableArray *_recentServersRowDescriptors;
    UITextField *_serverInputTextField;
    NSURL *_initialURL;
    NSURL *_sanitizedURL;
    NSURL *_initialUsername;
    NSArray *_recentServers;
}

@property (copy, nonatomic) NSURL *initialConnectionURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithURL:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)textFieldDidChange:(id)a0;
- (void)viewDidLoad;
- (BOOL)_canMoveToNextStep;
- (id)defaultRightBarButtonItem;
- (void)setupTableViewSections;
- (void)authenticationDelegate:(id)a0 didEncounterError:(id)a1;
- (void)removeServerWithRepresentation:(id)a0;
- (void)_disectURLToComponents:(id)a0;
- (void)_updateNextStep;
- (void)_connect:(id)a0;
- (void)_showRecentServersSectionWithRecentServers:(id)a0 rowAnimation:(long long)a1;
- (void)_connectToServer:(id)a0;
- (void)_transitionUIStateToConnecting;

@end
