@class ICStoreRequestContext, NSString;

@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    long long _storeItemID;
    NSString *_affiliateIdentifier;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)a0 storeItemID:(long long)a1 affiliateIdentifier:(id)a2;

@end
