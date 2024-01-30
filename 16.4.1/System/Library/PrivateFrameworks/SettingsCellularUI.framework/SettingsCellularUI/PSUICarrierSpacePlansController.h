@class RemoteUIController, NSString, CTCarrierSpaceClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate> {
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    RemoteUIController *_remoteUIController;
}

@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)getLogger;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)carrierSpaceChanged;
- (id)detailForPlanOption:(id)a0;
- (void)dismissPlanDetail;
- (void)moreDetailsButtonTapped:(id)a0;
- (void)simStatusChanged;
- (id)stringFromGroupCategory:(long long)a0;

@end
