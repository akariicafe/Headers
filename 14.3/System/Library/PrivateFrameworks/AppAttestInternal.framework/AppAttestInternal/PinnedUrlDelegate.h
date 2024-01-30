@class NSString;

@interface PinnedUrlDelegate : NSObject <NSURLSessionDelegate> {
    NSString *m_host;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithHost:(id)a0;

@end
