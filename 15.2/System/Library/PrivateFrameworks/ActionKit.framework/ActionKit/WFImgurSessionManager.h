@class NSURLSession, NSString, NSMapTable, WFOAuth2Credential, NSURL;

@interface WFImgurSessionManager : NSObject <NSURLSessionDataDelegate>

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) NSMapTable *progressTable;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void).cxx_destruct;
- (id)initWithClientID:(id)a0;
- (id)initWithClientID:(id)a0 configuration:(id)a1;
- (void)uploadImage:(id)a0 title:(id)a1 description:(id)a2 progress:(id)a3 completionHandler:(id /* block */)a4;
- (void)createAlbumWithIDs:(id)a0 title:(id)a1 description:(id)a2 layout:(id)a3 privacy:(id)a4 completionHandler:(id /* block */)a5;
- (void)getAlbumLinkFromID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendRequest:(id)a0 progress:(id)a1 completionHandler:(id /* block */)a2;

@end
