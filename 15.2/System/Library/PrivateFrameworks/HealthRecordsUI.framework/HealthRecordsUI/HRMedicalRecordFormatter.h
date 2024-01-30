@interface HRMedicalRecordFormatter : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ context;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithConceptStore:(id)a0 context:(long long)a1;
- (id)displayItemsFromRecord:(id)a0;
- (id)structuredItemsFromRecord:(id)a0;
- (id)attachmentItemsTitleFromRecord:(id)a0;
- (id)attachmentItemsFromRecord:(id)a0;
- (void)addSignedClinicalDataPassToWalletRepresentingGroup:(id)a0 responseDelay:(double)a1 completion:(id /* block */)a2;
- (BOOL)passExistsInWalletRepresentingGroup:(id)a0;
- (void)fetchQRCodeImageFromGroup:(id)a0 completion:(id /* block */)a1;
- (id)signedClinicalDataStatusDisplayItemsFromGroupContext:(id)a0;
- (id)signedClinicalDataWalletIntegrationDisplayItemsFromGroup:(id)a0;

@end
