@class NSMutableDictionary, NSObject;
@protocol CATTimerSource, CATIDSServiceConnectionDataChunker, CATTimer, OS_dispatch_queue, CATIDSServiceConnectionDataMessageQueueDelegate;

@interface CATConcreteIDSServiceConnectionDataMessageQueue : NSObject <CATIDSServiceConnectionDataMessageQueue> {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    id<CATIDSServiceConnectionDataChunker> mDataChunker;
    id<CATTimerSource> mTimerSource;
    double mFlushPromptInterval;
    BOOL mSupportsRetransmit;
    id<CATTimer> mFlushTimer;
    unsigned long long mHeadSequenceNumber;
    unsigned long long mTailSequenceNumber;
    NSMutableDictionary *mSendContentsBySequenceNumber;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionDataMessageQueueDelegate> delegate;

+ (id)flushTimerIdentifier;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0 timerSource:(id)a1 dataChunker:(id)a2 flushPromptInterval:(double)a3 supportsRetransmit:(BOOL)a4;
- (void)receiveData:(id)a0 completion:(id /* block */)a1;
- (void)retransmitSequenceNumbers:(id)a0;
- (void)receiveRemoteSequenceNumber:(unsigned long long)a0;
- (void)scheduleFlushTimer;
- (void)retransmitContent:(id)a0;
- (void)flushTimerDidFire:(id)a0 fireCount:(unsigned long long)a1;

@end
