@class NSURLSession, NSMapTable, WFOAuth2Credential, NSURL, NSString;

@interface WFDropboxSessionManager : NSObject <NSURLSessionTaskDelegate>

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *contentBaseURL;
@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) NSMapTable *progressTable;
@property (copy, nonatomic) WFOAuth2Credential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionConfiguration:(id)a0;
- (void)deleteItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)createFolderAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)searchFiles:(id)a0 inPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)getItemAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)getContentsOfFolderAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)getContentsOfFolderWithParameters:(id)a0 previous:(id)a1 completionHandler:(id /* block */)a2;
- (id)saveFile:(id)a0 toPath:(id)a1 overwrite:(BOOL)a2 progress:(id)a3 completionHandler:(id /* block */)a4;
- (void)getSharedLinkForFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExistingSharedLinkForFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadFile:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendContentDownloadRequestWithPath:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 parameters:(id)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (id)sendContentUploadRequestWithPath:(id)a0 parameters:(id)a1 data:(id)a2 inputStream:(id)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)sendRPCRequestWithPath:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;

@end
