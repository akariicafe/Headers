@interface AAAppSessionManager : NSObject {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTrackingConsent:(id)a0;
- (id)createSessionManager;
- (void)startAppSession;
- (void)endAppSession:(id /* block */)a0;
- (void)appSessionDidTerminate;

@end
