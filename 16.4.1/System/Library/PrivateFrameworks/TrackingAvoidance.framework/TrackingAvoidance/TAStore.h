@class TAVisitState, NSString, TAEventBuffer, NSDate, NSHashTable, TADeviceRecord;

@interface TAStore : NSObject <TAStoreObserver, TAStoreRequestProtocol> {
    NSDate *_lastLocationDate;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSDate *clock;
@property (readonly, nonatomic) TAEventBuffer *eventBuffer;
@property (readonly, nonatomic) TAVisitState *visitState;
@property (readonly, nonatomic) TADeviceRecord *deviceRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAddTALocationLite:(id)a0;
- (void)updateClock:(id)a0;
- (BOOL)shouldAddTACLVisit:(id)a0;
- (void)visitState:(id)a0 didIssueMetricsSubmissionHint:(unsigned long long)a1;
- (void)addObserver:(id)a0;
- (void)addTAEvent:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (BOOL)shouldAddTASPAdvertisement:(id)a0;
- (id)fetchTAUnknownBeacon:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEventBufferSettings:(id)a0 scanRequestSettings:(id)a1 visitStateSettings:(id)a2 deviceRecordSettings:(id)a3;
- (void)removeObserver:(id)a0;
- (void)visitState:(id)a0 didChangeStateFromType:(unsigned long long)a1 toType:(unsigned long long)a2;
- (void)requestAIS:(id)a0;
- (void).cxx_destruct;

@end
