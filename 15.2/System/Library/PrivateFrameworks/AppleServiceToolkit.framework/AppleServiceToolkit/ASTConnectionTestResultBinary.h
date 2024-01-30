@class ASTSealableFile, NSString, NSMutableURLRequest, NSURL, NSNumber;
@protocol ASTConnectionStatusDelegate;

@interface ASTConnectionTestResultBinary : ASTMaterializedConnection <ASTUploadConnection, ASTTestResultHandling>

@property (retain, nonatomic) ASTSealableFile *sealableFile;
@property (retain, nonatomic) NSString *dataId;
@property (readonly, nonatomic) NSURL *fileSteamLocationURL;
@property (copy, nonatomic) id /* block */ didReceiveResponse;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (weak, nonatomic) id<ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) unsigned long long rootOfTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *testId;

- (id)contentType;
- (id)endpoint;
- (void).cxx_destruct;
- (id)initWithSealableFile:(id)a0 fileSequence:(id)a1 totalFiles:(id)a2 testId:(id)a3 dataId:(id)a4;

@end
