@interface FinanceKit.PendingApplePayOrderImporter : NSObject {
    void /* unknown type, empty encoding */ store;
}

+ (id)makeImporterAndReturnError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)insertOrUpdatePendingApplePayOrderWithOrderDetails:(id)a0;

@end
