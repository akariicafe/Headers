@class NSString, HDDataAggregator, HDDataCollectorConfiguration;
@protocol HDCollectedSensorDatum;

@interface HDDataCollectorAggregatorRecord : NSObject {
    BOOL _hasSetLastSensorDatum;
    HDDataAggregator *_aggregator;
    NSString *_identifier;
    HDDataCollectorConfiguration *_configuration;
    id<HDCollectedSensorDatum> _lastSensorDatum;
}

- (id)description;
- (void).cxx_destruct;

@end
