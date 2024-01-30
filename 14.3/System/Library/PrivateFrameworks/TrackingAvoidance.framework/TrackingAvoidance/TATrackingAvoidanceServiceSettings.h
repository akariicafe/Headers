@interface TATrackingAvoidanceServiceSettings : NSObject

@property (readonly, nonatomic) BOOL enableTAFilterGeneral;
@property (readonly, nonatomic) BOOL enableTAFilterVisits;
@property (readonly, nonatomic) BOOL enableTAFilterSingleVisit;
@property (readonly, nonatomic) double classificationTimeInterval;

- (id)initWithEnableTAFilterGeneral:(BOOL)a0 enableTAFilterVisits:(BOOL)a1 enableTAFilterSingleVisit:(BOOL)a2 classificationTimeInterval:(double)a3;
- (id)initWithDefaults;
- (id)initWithEnableTAFilterGeneralOrDefault:(id)a0 enableTAFilterVisitsOrDefault:(id)a1 enableTAFilterSingleVisitOrDefault:(id)a2 classificationTimeIntervalOrDefault:(id)a3;

@end
