@class NSString, NSDictionary;

@interface PGAbstractMetricEvent : NSObject <PLMetricEvent>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;

@end
