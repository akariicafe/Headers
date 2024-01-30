@class NSString, NSNumber, NSDictionary;

@interface IDSQueryRateLimitedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *topLevelService;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSNumber *timeSinceStart;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTopLevelService:(id)a0 count:(id)a1 timeSinceStart:(id)a2;

@end
