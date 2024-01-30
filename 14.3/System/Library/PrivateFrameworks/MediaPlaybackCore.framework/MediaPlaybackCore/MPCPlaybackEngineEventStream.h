@class MSVSQLDatabase, MPCPlaybackEngineEvent, NSUUID, NSHashTable, NSMutableArray, NSObject;
@protocol MPCPlabackEngineEventStreamTestingDelegate, OS_dispatch_queue;

@interface MPCPlaybackEngineEventStream : NSObject {
    unsigned long long _maximumEventDeliveryTimestamp;
    NSMutableArray *_subscriptions;
    NSHashTable *_deferralAssertions;
    MSVSQLDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_lastReceivedEventIdentifier;
}

@property (weak, nonatomic) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *lastEvent;
@property (nonatomic) unsigned long long maximumEventDeliveryTimestamp;

- (id)initWithPlayerID:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)emitEventType:(id)a0 payload:(id)a1 atTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a2;
- (void)emitEventType:(id)a0 payload:(id)a1;
- (id)initWithDatabaseCreationBlock:(id /* block */)a0;
- (id)lastEventsWithCount:(long long)a0;
- (void)addConsumer:(id)a0;
- (void)removeConsumer:(id)a0;
- (id)eventDeliveryDeferralAssertionForReason:(id)a0;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)a0;

@end
