@class NSString, CSAudioStream, CSXPCClient, NSObject;
@protocol OS_dispatch_queue, CSAudioStreamProviding, CSCommandControlListenerDelegate;

@interface CSCommandControlListener : NSObject <CSAudioStreamProvidingDelegate, CSXPCClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<CSAudioStreamProviding> audioStreamProvider;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property (weak, nonatomic) id<CSCommandControlListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)CSXPCClient:(id)a0 didDisconnect:(BOOL)a1;
- (void)_startRequestWithCompletion:(id /* block */)a0;
- (void)audioStreamProvider:(id)a0 didHardwareConfigurationChange:(long long)a1;
- (void)startListenWithOption:(id)a0 completion:(id /* block */)a1;
- (void)stopListenWithCompletion:(id /* block */)a0;

@end
