@class NSDate, NSString, AWDHomeKitRemoteLogin;

@interface HomeKitEventRemoteLoginEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>

@property (readonly, nonatomic) AWDHomeKitRemoteLogin *metric;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (void)setError:(id)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
