@interface NewsUI2.NotificationAppExtensionCommunicator : NSObject <WCSessionDelegate> {
    void /* unknown type, empty encoding */ appConfigManager;
    void /* unknown type, empty encoding */ sharedDefaults;
}

- (void)session:(id)a0 activationDidCompleteWithState:(long long)a1 error:(id)a2;
- (void)sessionDidBecomeInactive:(id)a0;
- (void)sessionDidDeactivate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
