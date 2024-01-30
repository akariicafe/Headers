@class NSDate, NSString, AWDHomeKitRemoteLogout;

@interface HomeKitEventRemoteLogoutEvent : HMMLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>

@property (readonly, nonatomic) AWDHomeKitRemoteLogout *metric;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
