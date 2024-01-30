@class JETreatmentAction, NSDictionary, JEMetricsDataPredicate;

@interface JETreatment : NSObject {
    JEMetricsDataPredicate *_predicate;
    JETreatmentAction *_eventAction;
    NSDictionary *_fieldActions;
}

+ (id)treatmentWithConfiguration:(id)a0 topic:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0 topic:(id)a1;
- (id)performTreatment:(id)a0;

@end
