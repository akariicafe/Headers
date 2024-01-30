@class NSString, SSDownloadManifestResponse, SSDownloadManifestRequest;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate <SSDownloadManifestRequestDelegate> {
    SSDownloadManifestResponse *_response;
}

@property (readonly, retain, nonatomic) SSDownloadManifestRequest *request;
@property (nonatomic) BOOL shouldHideUserPrompts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithURLRequest:(id)a0;

- (void)downloadManifestRequest:(id)a0 didReceiveResponse:(id)a1;
- (void).cxx_destruct;
- (void)startCompletionBlock:(id /* block */)a0;

@end
