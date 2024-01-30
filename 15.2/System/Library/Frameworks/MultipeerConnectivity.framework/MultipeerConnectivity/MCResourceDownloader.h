@class MCSession, NSURLSession, NSString, NSURLSessionDataTask, MCPeerID;

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>

@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSURLSessionDataTask *urlTask;
@property (nonatomic) id /* block */ urlResponseHandler;
@property (nonatomic) MCSession *session;
@property (copy, nonatomic) NSString *resourceName;
@property (retain, nonatomic) MCPeerID *peerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (void)syncCloseStreamForSession:(id)a0 withError:(id)a1;
- (void)sendData:(id)a0 fromByteOffset:(unsigned long long)a1;
- (id)initWithSession:(id)a0 resourceUrl:(id)a1 name:(id)a2 peerID:(id)a3;

@end
