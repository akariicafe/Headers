@class NSNumber, FCPurchaseLookupResult, NSObject;
@protocol OS_dispatch_queue;

@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher>

@property (copy, nonatomic) NSNumber *bundleID;
@property (copy, nonatomic) NSNumber *externalVersionID;
@property (retain, nonatomic) FCPurchaseLookupResult *lookupResult;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;

- (id)promiseStoreExternalVersionWithLookupResult:(id)a0;
- (id)createAMSLookupWithProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchPurchaseMetadataForPurchaseID:(id)a0 restorePurchase:(BOOL)a1;
- (id)promisePurchaseLookupWithAppAdamID:(id)a0;
- (id)promiseBundleIDWithAppAdamID:(id)a0;
- (id)promiseProductLookupWithLookupResult:(id)a0 externalVersionID:(id)a1 restorePurchase:(BOOL)a2;
- (id)promiseStoreExternalVersionWithAppAdamID:(id)a0;
- (id)checkIfOfferUsedAlreadyWithAppAdamID:(id)a0;

@end
