@class NSString, NSObject;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextSender, VCTextReceiverDelegate> {
    int _clientPid;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    id _sendDelegate;
    id _mediaStreamDelegate;
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;
}

@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setPause:(BOOL)a0;
- (id)sendDelegate;
- (id)start;
- (id)pause;
- (id)resume;
- (void)dealloc;
- (id)stop;
- (void)sendText:(id)a0;
- (void)sendCharacter:(unsigned short)a0;
- (void)didReceiveText:(id)a0;
- (id)initWithSendDelegate:(id)a0 clientPid:(int)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (BOOL)setStreamConfig:(id)a0 withError:(id *)a1;

@end
