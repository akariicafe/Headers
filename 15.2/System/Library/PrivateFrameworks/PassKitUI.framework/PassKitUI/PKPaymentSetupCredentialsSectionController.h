@class NSArray, NSString, PKPaymentProvisioningController, PKPaymentSetupProduct, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PKPaymentSetupCredentialsSectionControllerDelegate;

@interface PKPaymentSetupCredentialsSectionController : PKPaymentSetupListSectionController <PKPaymentProvisioningControllerDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    NSString *_lastBackedUpDefaultPaymentPassSerialNumber;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableArray *_availableCredentials;
    NSMutableArray *_unavailableCredentials;
    NSMutableArray *_refundCredentials;
    PKPaymentSetupProduct *_product;
    NSHashTable *_selectedCredentialsBeforeEditing;
    BOOL _isEditing;
    NSArray *_targetDeviceSEIDs;
}

@property (nonatomic) unsigned long long maximumNumberOfSelectableCredentials;
@property (weak, nonatomic) id<PKPaymentSetupCredentialsSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (void)dealloc;
- (void)setEditing:(BOOL)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)didSelectItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (void)_createPassSnapshotFromPaymentPass:(id)a0 completion:(id /* block */)a1;
- (void)_loadCredentials:(id)a0 create:(BOOL)a1;
- (void)_updateMaximumSelectableCredentials;
- (void)_primeItemSelectionAndReloadData:(BOOL)a0;
- (BOOL)_setCredential:(id)a0 selected:(BOOL)a1 silently:(BOOL)a2;
- (void)_updateRemoteCredentialCache;
- (BOOL)doesContainCredentialThatRequiresAuth:(id)a0;
- (id)selectedCredentials;
- (id)_cardArtForCredentialItem:(id)a0;
- (id)_credentialItemFromIndexPath:(id)a0;
- (void)_deleteItem:(id)a0;
- (void)setCredential:(id)a0 selected:(BOOL)a1;
- (id)_credentialItemForCredential:(id)a0;
- (void)_replaceAndReloadItem:(id)a0 withNewItem:(id)a1;
- (id)_titleTextForCredential:(id)a0;
- (id)_detailTextForCredential:(id)a0;
- (void)_sortCredentialItems:(id)a0;
- (unsigned long long)_numberOfSelectedCredentials;
- (BOOL)_hasSelectedCredentials;
- (BOOL)_canSelectedCredential:(id)a0;
- (void)_removeCredentialItem:(id)a0;
- (struct CGSize { double x0; double x1; })_defaultCardSize;
- (id)initWithCredentials:(id)a0 provisioningController:(id)a1 context:(long long)a2 product:(id)a3;
- (id)unselectedCredentialRequiringAction;
- (id)availableCredentialRequiringAction;
- (void)reloadCredentialStores;
- (BOOL)hasCredentialThatRequiresAuth;
- (BOOL)shouldShowEditButton;
- (unsigned long long)_numberOfSelectedPeerPaymentCredentials;

@end
