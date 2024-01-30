@class NSMutableDictionary, NSMutableArray;

@interface CKChatEagerUploadController : NSObject

@property (retain, nonatomic) NSMutableDictionary *identifierMap;
@property (retain, nonatomic) NSMutableArray *uploadUrls;
@property (retain, nonatomic) NSMutableDictionary *temporaryURLS;

- (void)cancelAll;
- (void)uploadFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 videoComplementURL:(id)a3 attributionInfo:(id)a4 identifier:(id)a5 recipients:(id)a6;
- (void).cxx_destruct;
- (void)cancelIdentifier:(id)a0;
- (void)didSendComposition;
- (void)uploadPayload:(id)a0 identifier:(id)a1 replace:(BOOL)a2 recipients:(id)a3;
- (id)init;
- (void)cancelURL:(id)a0;
- (void)removeTemporaryURLForURL:(id)a0;
- (void)_uploadFileURL:(id)a0 filename:(id)a1 transcoderUserInfo:(id)a2 videoComplementURL:(id)a3 attributionInfo:(id)a4 identifier:(id)a5 recipients:(id)a6;
- (id)_newTransferForURL:(id)a0 transcoderUserInfo:(id)a1 attributionInfo:(id)a2;
- (void)addURLToIdentifierMap:(id)a0 forIdentifier:(id)a1;
- (void)asyncCopyFileAtURL:(id)a0 toDestinationURL:(id)a1 completion:(id /* block */)a2;

@end
