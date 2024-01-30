@class NSMutableDictionary;
@protocol ICPeerMessageControllerDelegate;

@interface ICPeerMessageController : NSObject {
    NSMutableDictionary *_deviceRequests;
    NSMutableDictionary *_sourceToDevices;
    NSMutableDictionary *_deviceUUIDToSource;
}

@property (weak, nonatomic) id<ICPeerMessageControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)deviceRequestsForUUID:(id)a0;
- (void)didFinishReceivingResourceWithName:(id)a0 fromSource:(id)a1 atURL:(id)a2 withError:(id)a3;
- (void)disconnectedFromSource:(id)a0;
- (void)handleAttachment:(const void *)a0 fromDevice:(id)a1;
- (void)handleKeepAliveMessage:(const void *)a0 fromDevice:(id)a1;
- (void)handleMediaMessage:(const void *)a0 fromDevice:(id)a1;
- (void)handleMessage:(id)a0 fromSource:(id)a1;
- (void)handleNoteMessage:(const void *)a0 fromDevice:(id)a1 data:(id)a2;
- (void)handleRequestAttachment:(const void *)a0 fromDevice:(id)a1;
- (void)handleRequestMedia:(const void *)a0 fromDevice:(id)a1;
- (void)handleRequestNoteMessage:(const void *)a0 fromDevice:(id)a1;
- (void)handleUnavailableMediaMessage:(const void *)a0 fromDevice:(id)a1;
- (id)mediaRequestForDevice:(id)a0 withIdentifier:(id)a1;
- (void)requestAttachment:(id)a0;
- (void)requestMedia:(id)a0;
- (void)requestNote:(id)a0 from:(id)a1;
- (void)sendKeepAlive;
- (void)sendMediaURL:(id)a0 toSource:(id)a1;
- (id)sendMessage:(void *)a0 toDevices:(id)a1;
- (id)sendMessage:(void *)a0 toSource:(id)a1 completionBlock:(id /* block */)a2;
- (id)sendMessage:(void *)a0 toSources:(id)a1;
- (id)sendNote:(id)a0 toDevices:(id)a1;

@end
