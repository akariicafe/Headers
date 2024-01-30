@class NSOperationQueue, NSString;

@interface TVPSecureKeyStandardConnector : NSObject <TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)secureKeyStandardLoader:(id)a0 requestForFetchingDataFromURL:(id)a1;
- (id)secureKeyStandardLoader:(id)a0 requestForPostingData:(id)a1 toURL:(id)a2;
- (void)secureKeyStandardLoader:(id)a0 sendAsynchronousRequest:(id)a1 completionHandler:(id /* block */)a2;

@end
