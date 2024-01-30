@class NSURLSession, NSString, NSMapTable, NSURL;

@interface WFSlackSessionManager : NSObject <NSURLSessionDataDelegate>

@property (readonly, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMapTable *progressTable;
@property (copy, nonatomic) NSString *token;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionConfiguration:(id)a0;
- (void)sendRequest:(id)a0 progress:(id)a1 completionHandler:(id /* block */)a2;
- (void)testAuthentication:(id /* block */)a0;
- (void)listChannels:(id /* block */)a0;
- (void)listGroups:(id /* block */)a0;
- (void)listUsers:(id /* block */)a0;
- (void)listIMs:(id /* block */)a0;
- (void)sendMessage:(id)a0 toChannel:(id)a1 completionHandler:(id /* block */)a2;
- (void)uploadFile:(id)a0 progress:(id)a1 toChannel:(id)a2 completionHandler:(id /* block */)a3;

@end
