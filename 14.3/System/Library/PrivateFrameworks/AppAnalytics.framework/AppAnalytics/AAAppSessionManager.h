@interface AAAppSessionManager : NSObject {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (id)createSessionManager;
- (void)startAppSession;
- (void)endAppSession:(id /* block */)a0;
- (void)appSessionDidTerminate;
- (id)init;
- (void).cxx_destruct;

@end
