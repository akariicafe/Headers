@protocol FPUIAuthenticationServerRepresentation, FPUIAuthenticationServerInfoDelegate;

@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController {
    id<FPUIAuthenticationServerRepresentation> _serverRepresentation;
}

@property (weak, nonatomic) id<FPUIAuthenticationServerInfoDelegate> serverInfoDelegate;

- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupTableViewSections;
- (void)removeButtonTapped:(id)a0;
- (id)initWithServerRepresentation:(id)a0;
- (id)defaultLeftBarButtonItem;

@end
