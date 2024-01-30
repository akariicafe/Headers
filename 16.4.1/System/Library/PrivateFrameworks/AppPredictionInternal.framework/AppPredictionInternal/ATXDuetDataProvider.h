@class NSArray;

@interface ATXDuetDataProvider : NSObject

@property (class, readonly, nonatomic) Class supportedDuetEventClass;
@property (class, readonly, nonatomic) long long supportedCoreDuetStream;

@property (readonly, nonatomic) NSArray *streamData;

+ (id)duetHelperStreamTypeToDuetEventStream:(long long)a0;

- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4;
- (void).cxx_destruct;
- (id)fetchEventIdentifierCountsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;
- (id)fetchEventIdentifierCountsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2 dateBuckets:(id)a3;
- (id)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withPredicates:(id)a2;
- (id)filteredEventsWithPredicate:(id)a0;
- (id)getUniqueValuesForPropertyKey:(id)a0;
- (void)tagEventsWithLocationsFromLocationVisitsArray:(id)a0;

@end
