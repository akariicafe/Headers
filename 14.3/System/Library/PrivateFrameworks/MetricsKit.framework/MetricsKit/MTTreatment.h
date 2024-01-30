@class MTMetricsDataPredicate, MTTreatmentAction, NSDictionary;

@interface MTTreatment : NSObject

@property (retain, nonatomic) MTMetricsDataPredicate *predicate;
@property (retain, nonatomic) MTTreatmentAction *eventAction;
@property (retain, nonatomic) NSDictionary *fieldActions;

+ (id)treatmentWithConfigData:(id)a0;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)performTreatment:(id)a0;

@end
