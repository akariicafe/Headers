@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSSSRXPCClientDelegate;

@interface CSSSRXPCClient : NSObject <CSSSRXPCServiceDelegate>

@property (retain, nonatomic) NSXPCConnection *ssrConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (weak, nonatomic) id<CSSSRXPCClientDelegate> delegate;

- (void)didFinishSpeakerRecognition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)didReceiveSpeakerRecognitionScoreCard:(id)a0;
- (void)dealloc;
- (void)startXPCConnection;
- (id)_getRemoteServiceProxyObject;
- (void)_createClientConnection;

@end
