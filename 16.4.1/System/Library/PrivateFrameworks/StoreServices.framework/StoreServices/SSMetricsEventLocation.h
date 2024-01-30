@class NSString, NSDictionary, NSMutableDictionary;

@interface SSMetricsEventLocation : NSObject {
    NSMutableDictionary *_values;
}

@property (nonatomic) long long locationPosition;
@property (copy, nonatomic) NSString *locationType;
@property (readonly, nonatomic) NSDictionary *reportingDictionary;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forLocationKey:(id)a1;
- (id)valueForLocationKey:(id)a0;

@end
