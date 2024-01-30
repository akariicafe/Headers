@class NSString;

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {
    struct RetainPtr<id> { void *m_ptr; } realDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)downloadDidFinish:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)download:(id)a0 decideDestinationWithSuggestedFilename:(id)a1;
- (void)download:(id)a0 didCreateDestination:(id)a1;
- (void)download:(id)a0 didFailWithError:(id)a1;
- (void)download:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)download:(id)a0 didReceiveDataOfLength:(unsigned long long)a1;
- (void)download:(id)a0 didReceiveResponse:(id)a1;
- (BOOL)download:(id)a0 shouldDecodeSourceDataOfMIMEType:(id)a1;
- (id)download:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)downloadDidBegin:(id)a0;
- (void)setRealDelegate:(id)a0;

@end
