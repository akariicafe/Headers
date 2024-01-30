@class PKSharedPassSharesController, NSString, PKSharePreviewAdditionalSecuritySectionController, CNAutocompleteSearchController, PKSharePreviewOverviewSectionController, PKPassSnapshotter, PKPassEntitlementsComposer, PKPassShareInitiationContext;
@protocol PKPassSharePreviewViewControllerDelegate;

@interface PKPassSharePreviewViewController : PKPaymentSetupOptionsViewController <PKSharePreviewOverviewSectionControllerDelegate, PKSharePreviewAdditionalSecuritySectionControllerDelegate, CNAutocompleteSearchControllerDelegate, CNContactPickerDelegate, UISheetPresentationControllerDelegate> {
    PKSharedPassSharesController *_sharesController;
    PKPassShareInitiationContext *_context;
    PKPassEntitlementsComposer *_entitlementComposer;
    id<PKPassSharePreviewViewControllerDelegate> _delegate;
    PKSharePreviewOverviewSectionController *_overviewSectionController;
    PKSharePreviewAdditionalSecuritySectionController *_additionalSecuritySectionController;
    CNAutocompleteSearchController *_contactSearchController;
    PKPassSnapshotter *_passSnapshotter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_cancelPressed;
- (void)_closeContactPicker;
- (void)_continueButtonPressed;
- (void)contextDidChange;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)a0 anchoredToView:(id)a1;
- (id)initWithSharesController:(id)a0 context:(id)a1 delegate:(id)a2;
- (id)searchController:(id)a0 composeRecipientForAddress:(id)a1;
- (void)searchController:(id)a0 didAddRecipient:(id)a1;
- (void)setShowHeaderSpinner:(BOOL)a0;
- (void)sharePreviewSectionControllerDidSelectEntitlements:(id)a0;
- (void)sharePreviewSectionControllerDidSelectShowContactPicker:(id)a0;
- (void)sharePreviewSectionControllerDidUpdateEntitlements:(id)a0;

@end
