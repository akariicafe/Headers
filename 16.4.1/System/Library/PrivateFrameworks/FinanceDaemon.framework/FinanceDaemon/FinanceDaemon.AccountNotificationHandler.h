@interface FinanceDaemon.AccountNotificationHandler : NSObject {
    void /* unknown type, empty encoding */ makeCoreDataStore;
}

+ (id)makeHandler;

- (id)init;
- (void).cxx_destruct;
- (void)primaryAppleAccountWasAdded;
- (void)primaryAppleAccountWasDeleted;

@end
