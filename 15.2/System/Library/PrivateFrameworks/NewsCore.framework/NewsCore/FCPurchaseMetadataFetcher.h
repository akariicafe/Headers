@class NSObject, NSString, NSNumber, FCPurchaseLookupResult;
@protocol OS_dispatch_queue;

@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher> {
    NSString *_bundleID;
    NSNumber *_externalVersionID;
    FCPurchaseLookupResult *_lookupResult;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (id)fetchPurchaseMetadataForPurchaseID:(id)a0 restorePurchase:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
