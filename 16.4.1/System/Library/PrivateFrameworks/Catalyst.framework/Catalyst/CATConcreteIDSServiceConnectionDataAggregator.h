@class NSMutableIndexSet, NSMutableDictionary, NSObject;
@protocol CATIDSServiceConnectionDataAggregatorDelegate, CATTimerSource, CATTimer, OS_dispatch_queue;

@interface CATConcreteIDSServiceConnectionDataAggregator : NSObject <CATIDSServiceConnectionDataAggregationDelegate, CATIDSServiceConnectionDataAggregator> {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    id<CATTimerSource> mTimerSource;
    double mMissingItemInterval;
    BOOL mSupportsSequenceCorrection;
    NSMutableDictionary *mAggregationsByDataNumber;
    unsigned long long mNextDeploymentNumber;
    unsigned long long mNextExpectedSequenceNumber;
    unsigned long long mGreatestExpectedSequenceNumber;
    NSMutableIndexSet *mPendingSequenceNumbers;
    id<CATTimer> mMissingContentTimer;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionDataAggregatorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long receivedSequenceNumber;

+ (id)missingContentTimerIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)dataAggregationCompleted:(id)a0;
- (id)initWithWorkQueue:(id)a0 timerSource:(id)a1 missingItemInterval:(double)a2 supportsSequenceCorrection:(BOOL)a3;
- (void)missingContentTimerDidFire:(id)a0 fireCount:(unsigned long long)a1;
- (id)missingSequenceNumbers;
- (void)processNewDataWindowWithContent:(id)a0;
- (void)receiveDataContent:(id)a0;
- (void)receiveExpectedSequenceNumber:(unsigned long long)a0;
- (void)updateExistingDataWindowWithContent:(id)a0;
- (void)updateMissingContentTrackingForDataContent:(id)a0;

@end
