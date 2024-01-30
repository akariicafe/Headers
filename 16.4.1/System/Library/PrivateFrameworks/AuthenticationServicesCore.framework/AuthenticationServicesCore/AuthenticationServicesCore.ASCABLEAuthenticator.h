@interface AuthenticationServicesCore.ASCABLEAuthenticator : NSObject {
    void /* unknown type, empty encoding */ cryptographyManager;
    void /* unknown type, empty encoding */ bluetoothAdvertiser;
    void /* unknown type, empty encoding */ advertisement;
    void /* unknown type, empty encoding */ webSocket;
    void /* unknown type, empty encoding */ apsConnection;
    void /* unknown type, empty encoding */ apsWrapper;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ powerLogger;
    void /* unknown type, empty encoding */ currentCTAPCommand;
    void /* unknown type, empty encoding */ networkPathMonitor;
    void /* unknown type, empty encoding */ currentState;
}

- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)finishTransactionWithCredential:(id)a0 error:(id)a1;
- (id)initWithCaBLEURL:(id)a0 error:(id *)a1;

@end
