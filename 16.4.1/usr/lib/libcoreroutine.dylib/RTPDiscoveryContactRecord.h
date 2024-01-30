@class NSMutableDictionary, NSHashTable;

@interface RTPDiscoveryContactRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *contactRecord;
@property (retain, nonatomic) NSMutableDictionary *realTimeEvents;
@property (nonatomic) unsigned long long minObservationDuration;
@property (nonatomic) unsigned long long maxSeparationDuration;
@property (nonatomic) unsigned long long maxBackstopDuration;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)computeEventMetrics:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addObserver:(id)a0;
- (id)descriptionDictionary;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)ingestEvent:(id)a0;
- (void)closeProximityEvent:(id)a0;
- (void)createSingleContactRecord:(id)a0;
- (void)filterAndCloseProximityEvents;
- (id)generateRealtimeProximityEventFromDate:(id)a0 endDate:(id)a1;
- (id)getFirstObservationDate:(id)a0;
- (id)getLatestAdvertisementDate:(id)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1;
- (id)initWithQueue:(id)a0 minObservationDuration:(unsigned long long)a1 maxSeparationDuration:(unsigned long long)a2 maxBackstopDuration:(unsigned long long)a3;
- (void)mergeWithAnotherContactRecord:(id)a0;
- (void)notifyObserversOnCloseProximityEvent:(id)a0;
- (id)queryRealTimeEventsByEventIDs:(id)a0;
- (void)updateContactRecordOnAdvertisementReceived:(id)a0;

@end
