@class NSNumber;

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver

@property (readonly, copy, nonatomic) NSNumber *storeAccountIdentifier;

- (void).cxx_destruct;
- (id)initWithStoreAccountIdentifier:(id)a0;
- (void)resolveError:(id)a0;

@end
