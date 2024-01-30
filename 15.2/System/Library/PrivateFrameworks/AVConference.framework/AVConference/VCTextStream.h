@class NSString, VCTextReceiver, VCTextTransmitter;
@protocol VCTextReceiverDelegate;

@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate> {
    VCTextReceiver *_textReceiver;
    VCTextTransmitter *_textTransmitter;
    id<VCTextReceiverDelegate> _receiveDelegate;
}

@property (nonatomic) id<VCTextReceiverDelegate> receiveDelegate;
@property (readonly, nonatomic) double lastReceivedRTPPacketTime;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)sendText:(id)a0;
- (void)sendCharacter:(unsigned short)a0;
- (id)supportedPayloads;
- (void)didReceiveText:(id)a0;
- (void)setupTextTransmitter;
- (BOOL)setupTextReceiverWithError:(id *)a0;
- (void)didReceiveCharacter:(unsigned short)a0;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)a0 error:(id *)a1;
- (void)onStartWithCompletionHandler:(id /* block */)a0;
- (void)onStopWithCompletionHandler:(id /* block */)a0;
- (void)onPauseWithCompletionHandler:(id /* block */)a0;
- (void)onResumeWithCompletionHandler:(id /* block */)a0;
- (void)onSendRTCPPacket;
- (void)onRTPTimeout;
- (void)onRTCPTimeout;
- (double)rtcpHeartbeatLeeway;

@end
