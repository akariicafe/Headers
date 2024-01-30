@class NSString, NSObject;
@protocol STRootViewModelCoordinator;

@interface STPINListViewController : STListViewController <STRestrictionsPINControllerDelegate>

@property (retain, nonatomic) id showingPinTarget;
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)showPINSheet:(id)a0;
- (void).cxx_destruct;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)devicePINController:(id)a0 didAcceptChangedPIN:(id)a1;
- (void)didAcceptRemovePIN;
- (id)init;
- (void)devicePINControllerDidDismissPINPane:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)didCancelEnteringPIN;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)showPINSheet:(id)a0 completion:(id /* block */)a1;
- (id)initWithRootViewModelCoordinator:(id)a0;
- (void)setUpPasscodeAndLineWrapBehaviorForSpecifier:(id)a0;
- (BOOL)shouldShowPINSheetForSpecifier:(id)a0;
- (BOOL)validatePIN:(id)a0 forPINController:(id)a1;

@end
