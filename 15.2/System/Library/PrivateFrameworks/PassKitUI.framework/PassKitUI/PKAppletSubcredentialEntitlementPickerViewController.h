@class PKPaymentPass, NSString, PKSharedCredentialsGroupController, NSArray, PKSubcredentialMessageComposeViewController, PKAppletSubcredentialSharingRequest;
@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;

@interface PKAppletSubcredentialEntitlementPickerViewController : PKPaymentSetupTableViewController <PKSubcredentialMessageComposeViewControllerDelegate> {
    PKPaymentPass *_pass;
    PKSharedCredentialsGroupController *_groupController;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    NSArray *_supportedEntitlements;
    long long _selectedEntitlementIndex;
    id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;
    BOOL _isSharing;
}

@property (retain, nonatomic) PKSubcredentialMessageComposeViewController *messageComposeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (void)handleSharedButton;
- (id)initWithSharedCredentialsGroupController:(id)a0 delegate:(id)a1 sharingRequest:(id)a2;

@end
