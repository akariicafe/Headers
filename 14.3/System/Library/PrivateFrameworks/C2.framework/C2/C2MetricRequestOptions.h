@class NSString, NSUUID, C2MetricOptions;

@interface C2MetricRequestOptions : NSObject

@property (nonatomic) unsigned char _allowsExpensiveAccess;
@property (nonatomic) unsigned char _allowsPowerNapScheduling;
@property (retain, nonatomic) NSString *_sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (retain, nonatomic) NSUUID *metricUUID;
@property (retain, nonatomic) C2MetricOptions *metricOptions;

- (id)init;
- (void).cxx_destruct;
- (id)metricRequestTransportOptions;
- (id)initWithRequestOptions:(id)a0;

@end
