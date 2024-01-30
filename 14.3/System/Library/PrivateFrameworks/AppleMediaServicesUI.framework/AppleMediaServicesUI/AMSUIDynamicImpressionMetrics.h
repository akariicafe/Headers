@class NSDictionary, AMSUIDynamicImpressionMetricsIdentifier;

@interface AMSUIDynamicImpressionMetrics : NSObject

@property (retain, nonatomic) NSDictionary *custom;
@property (retain, nonatomic) NSDictionary *fields;
@property (retain, nonatomic) AMSUIDynamicImpressionMetricsIdentifier *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fields:(id)a1 custom:(id)a2;

@end
