@interface HealthRecords.ClinicalSharingFeedItemViewController : UIViewController <HKSharingRecipientAuthorizationStoreObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_factory;
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ shouldUpdateViewAtViewDidLoad;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ preferredIconSize;
    void /* unknown type, empty encoding */ accountIconProvider;
    void /* unknown type, empty encoding */ clinicalSharingFeedItemData;
    void /* unknown type, empty encoding */ authStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disclosureIndicator;
}

- (void)sharingRecipientAuthorizationStore:(id)a0 didAddSharingAuthorizations:(id)a1;
- (void)sharingRecipientAuthorizationStore:(id)a0 didRemoveSharingAuthorizations:(id)a1;
- (void)sharingRecipientAuthorizationWasRevokedForStore:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
