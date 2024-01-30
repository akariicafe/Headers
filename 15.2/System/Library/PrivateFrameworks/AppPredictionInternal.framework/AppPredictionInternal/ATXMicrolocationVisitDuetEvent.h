@class NSUUID, NSDictionary;

@interface ATXMicrolocationVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSUUID *dominantMicrolocationUUID;
@property (readonly, nonatomic) NSDictionary *microlocationUUIDProbabilities;

- (id)identifier;
- (id)description;
- (id)initWithDKEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDominantMicrolocationUUID:(id)a0 microlocationProbabilities:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)initWithCurrentContextStoreValuesWithTwoHourLimit:(BOOL)a0;

@end
