@class NSDictionary;

@interface JEMetricsDataPredicate : NSObject {
    NSDictionary *_fieldPredicates;
}

+ (id)predicateWithConfiguration:(id)a0;
+ (id)predicateWithType:(id)a0 argument:(id)a1;

- (id)initWithConfigDictionary:(id)a0;
- (id)initWithFormat:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithMetricsData:(id)a0;

@end
