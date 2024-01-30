@class NSArray, FCPurchaseLookupRecordSource;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation

@property (retain, nonatomic) NSArray *purchaseIDs;
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;

- (void)performOperation;
- (id)processFetchedResults:(id)a0;
- (id)_prefixedPurchasedIDs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPurchaseIDs:(id)a0 purchaseLookupRecordSource:(id)a1;

@end
