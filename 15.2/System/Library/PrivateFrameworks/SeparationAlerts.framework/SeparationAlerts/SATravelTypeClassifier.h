@class NSDate, NSHashTable;

@interface SATravelTypeClassifier : NSObject <SATravelTypeClassifierServiceProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (nonatomic) unsigned long long currentTravelType;
@property (copy, nonatomic) NSDate *currentTravelTypeChangeDate;
@property (readonly, nonatomic) unsigned long long travelType;

+ (id)convertSATravelTypeToString:(unsigned long long)a0;

- (void)removeClient:(id)a0;
- (void)_handleVehicleStateEvent:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (void)_notifyAllClientsOfTravelTypeChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_handleUserActivityEvent:(id)a0;
- (id)_vehicularHintsToString:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_setNewTravelType:(unsigned long long)a0;
- (void)addClient:(id)a0;

@end
