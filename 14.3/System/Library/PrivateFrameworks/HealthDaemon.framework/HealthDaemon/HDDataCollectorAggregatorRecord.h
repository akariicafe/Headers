@class NSString, HDDataAggregator, HDDataCollectorConfiguration;
@protocol HDCollectedSensorDatum;

@interface HDDataCollectorAggregatorRecord : NSObject

@property (readonly, nonatomic) HDDataAggregator *aggregator;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) HDDataCollectorConfiguration *configuration;
@property (copy, nonatomic) id<HDCollectedSensorDatum> lastSensorDatum;
@property (readonly, nonatomic) BOOL hasSetLastSensorDatum;

- (void).cxx_destruct;
- (id)initWithAggregator:(id)a0 identifier:(id)a1;
- (id)description;

@end
