@interface ActivityKit.AlertClient : NSObject <ACAlertXPCClient> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
}

- (void)dismissAlertWithActivityIdentifier:(id)a0;
- (void)presentAlertWithActivityIdentifier:(id)a0 payload:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
