@class NSDate, NSHashTable;
@protocol SATimeServiceProtocol;

@interface SATravelTypeClassifier : NSObject <SATravelTypeClassifierServiceProtocol>

@property (retain, nonatomic) id<SATimeServiceProtocol> clock;
@property (retain, nonatomic) NSHashTable *clients;
@property (nonatomic) unsigned long long currentTravelType;
@property (copy, nonatomic) NSDate *currentTravelTypeChangeDate;
@property (readonly, nonatomic) unsigned long long travelType;

+ (id)convertSATravelTypeToString:(unsigned long long)a0;

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)_handleVehicleStateEvent:(id)a0;
- (void)_notifyAllClientsOfTravelTypeChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1 hints:(unsigned long long)a2;
- (BOOL)_setNewTravelType:(unsigned long long)a0 hints:(unsigned long long)a1;
- (void)_handleUserActivityEvent:(id)a0;
- (id)_vehicularHintsToString:(unsigned long long)a0;
- (id)initWithClock:(id)a0;
- (void).cxx_destruct;

@end
