@class NSString, ICPeerMessageController, ICPeerInputStream, ICPeerOutputStream;

@interface ICHandoffController : NSObject <ICPeerMessageControllerDelegate, ICPeerInputStreamDelegate> {
    ICPeerInputStream *_inputStream;
}

@property (retain) ICPeerMessageController *peerController;
@property (retain) ICPeerInputStream *inputStream;
@property (retain) ICPeerOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)didReceiveInputStream:(id)a0 outputStream:(id)a1;
- (void).cxx_destruct;
- (void)didDisconnectInputStream:(id)a0;
- (void)handleMessage:(id)a0 fromInputStream:(id)a1;
- (void)requestNoteWithIdentifier:(id)a0;
- (void)sendMedia:(id)a0 toSource:(id)a1;
- (BOOL)sendMessage:(id)a0 toSource:(id)a1 error:(id *)a2;

@end
