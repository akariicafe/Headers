@class NSArray;

@interface SSMetricsImpressionsEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSArray *impressionIdentifiers;

- (id)description;
- (id)init;

@end
