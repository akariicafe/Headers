@interface WBSScopeTimeoutHandler : NSObject {
    id /* block */ _handler;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimeout:(double)a0 autoBugCaptureDomain:(id)a1 detectedProcess:(id)a2 context:(id)a3;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;

@end
