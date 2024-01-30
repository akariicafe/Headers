@interface PreviewsOSSupport.UVServiceHubPipeService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ serviceHubTransport;
    void /* unknown type, empty encoding */ messagePipe;
}

+ (id)createAndReturnError:(id *)a0 with:(id /* block */)a1;

- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)observeCancelation:(id /* block */)a0;

@end
