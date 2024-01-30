@class NSObject;
@protocol OS_dispatch_queue;

@interface VCControlChannel : VCObject {
    id _dataReceivedDelegate;
    int _bytesSent;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _bytesReceived;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
    NSObject<OS_dispatch_queue> *_asyncProcessingQueue;
}

@property (nonatomic) id messageReceivedDelegate;
@property (nonatomic) id dataReceivedDelegate;
@property (readonly, nonatomic) unsigned int reliableMessageResendInterval;

- (id)init;
- (void)dealloc;
- (BOOL)sendReliableMessageAndWait:(id)a0;
- (void)sendReliableMessage:(id)a0;
- (BOOL)sendReliableMessageAndWait:(id)a0 participantID:(unsigned long long)a1;
- (void)setEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x0; unsigned int x1; struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x2; unsigned int x3; int x4; int x5; } *)a0;
- (void)flushActiveMessages;
- (void)sendReliableMessage:(id)a0 participantID:(unsigned long long)a1;
- (void)sendUnreliableMessage:(id)a0 participantID:(unsigned long long)a1;
- (void)broadcastUnreliableMessage:(id)a0;
- (void)throwNotSupportedExceptionForMethod:(id)a0;

@end
