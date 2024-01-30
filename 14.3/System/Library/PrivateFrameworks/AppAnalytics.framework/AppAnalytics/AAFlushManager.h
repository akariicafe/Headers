@interface AAFlushManager : NSObject {
    void /* unknown type, empty encoding */ flushManager;
}

- (id)initWithAppSessionManager:(id)a0 client:(id)a1 endpoint:(id)a2 config:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)flushWithCompletion:(id /* block */)a0;

@end
