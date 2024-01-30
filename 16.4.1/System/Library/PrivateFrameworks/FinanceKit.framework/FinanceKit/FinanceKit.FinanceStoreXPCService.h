@class NSString, XPCContainsOrderResult, NSError, NSDate;

@interface FinanceKit.FinanceStoreXPCService : _TtCs12_SwiftObject <FinanceKit.OrderTrackingXPCProtocol, FinanceKit.FinanceStoreXPCProtocol> {
    void /* unknown type, empty encoding */ implementation;
    void /* unknown type, empty encoding */ entitlements;
}

- (void)containsOrderWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 updatedDate:(id)a2 completion:(id /* block */)a3;
- (void)containsOrderWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 updatedDate:(NSDate *)a2 completionHandler:(void (^)(XPCContainsOrderResult *, NSError *))a3;
- (void)deleteOrderWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)insertOrUpdateOrderAsyncWithData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)insertOrUpdateOrderSyncWithData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)refreshOrderWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setOrderMarkedAsCompleteWithOrderTypeIdentifier:(NSString *)a0 orderIdentifier:(NSString *)a1 newValue:(BOOL)a2 modificationDate:(NSDate *)a3 completionHandler:(void (^)(NSError *))a4;
- (void)updateOrdersShowAsActiveWithNow:(NSDate *)a0 completionHandler:(void (^)(NSError *))a1;

@end
