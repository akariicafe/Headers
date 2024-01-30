@interface DonationAccountWatcher.Plugin : NSObject <ACDAccountNotificationPlugin> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
