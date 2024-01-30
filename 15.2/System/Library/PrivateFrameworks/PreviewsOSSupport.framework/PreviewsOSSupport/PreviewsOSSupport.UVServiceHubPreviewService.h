@interface PreviewsOSSupport.UVServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ shellConnection;
}

+ (id)createAndReturnError:(id *)a0;

- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)observeCancelation:(id /* block */)a0;

@end
