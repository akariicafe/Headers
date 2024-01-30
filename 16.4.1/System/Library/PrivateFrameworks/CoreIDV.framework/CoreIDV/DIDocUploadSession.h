@class DIDocUploadSessionClient;

@interface DIDocUploadSession : NSObject

@property (retain) DIDocUploadSessionClient *client;

- (id)init;
- (void).cxx_destruct;
- (void)uploadDocData:(id)a0 uploadSettings:(id)a1 completion:(id /* block */)a2;
- (void)cancelUploads;

@end
