@class NSObject, AWDCompanionSyncReceiveEvent, AWDServerConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SYMetricLogger : NSObject {
    AWDServerConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    AWDCompanionSyncReceiveEvent *_lastReceiveMetric;
    NSObject<OS_dispatch_source> *_lastReceiveMetricSource;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_sendLastReceiveMetric;
- (void)_bufferNewReceiptMetricForMessage:(id)a0 service:(id)a1;
- (void)postReceiptOfMessage:(id)a0 forService:(id)a1;
- (void)updateLastReceivedMessageWithProcessingTime:(double)a0;
- (void)postSequenceErrorOfType:(int)a0 sequenceNumber:(unsigned long long)a1 forService:(id)a2;
- (void)postFullSyncDuration:(double)a0 onMaster:(BOOL)a1 forService:(id)a2;
- (void)postErrorInformation:(id)a0 forService:(id)a1;

@end
