@interface SeymourServices.ServiceSubscriptionDialogObserver : NSObject <ASDNotificationCenterDialogObserver> {
    void /* unknown type, empty encoding */ dataSource;
}

- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
