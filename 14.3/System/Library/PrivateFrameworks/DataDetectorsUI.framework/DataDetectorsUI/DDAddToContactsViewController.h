@class NSString, CNContactViewController, DDAction;
@protocol DDRemoteActionPresenter;

@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate> {
    id<DDRemoteActionPresenter> _proxy;
    CNContactViewController *_personViewController;
    BOOL _contactBeingAdded;
}

@property (retain) DDAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)alternateNameForContact:(id)a0;

- (void)setCancellable:(BOOL)a0;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(id)a0;
- (void)contactViewControllerForUnknownContactDidEndAddingToContacts:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancelPressed:(id)a0;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (void)prepareForAction:(id)a0;
- (void)setCancelButtonVisible:(BOOL)a0;
- (void)doneWithAddingContactShouldDismiss:(BOOL)a0;

@end
