@class NSString, NSArray, NSError;

@interface FinanceKitUI.ApplePayOrderFetchController : NSObject {
    void /* unknown type, empty encoding */ store;
}

+ (id)makeFetchController;

- (id)init;
- (void).cxx_destruct;
- (void)fetchRowViewModelsForTransactionWithIdentifier:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
