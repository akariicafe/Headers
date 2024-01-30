@interface PreviewsOSSupport.UVServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ shellConnection;
}

+ (id)createAndReturnError:(id *)a0;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)observeCancelation:(id /* block */)a0;

@end
