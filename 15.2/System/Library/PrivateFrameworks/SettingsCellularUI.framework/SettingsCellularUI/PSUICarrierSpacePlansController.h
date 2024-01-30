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

- (id)specifiers;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)simStatusChanged;
- (void)carrierSpaceChanged;
- (id)stringFromGroupCategory:(long long)a0;
- (id)detailForPlanOption:(id)a0;
- (void)moreDetailsButtonTapped:(id)a0;
- (void)dismissPlanDetail;

@end
