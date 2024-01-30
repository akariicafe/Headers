@class NSString, AWDHomeKitRemoteLogout;

@interface HomeKitEventRemoteLogoutEvent : HMMLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>

@property (readonly, nonatomic) AWDHomeKitRemoteLogout *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setError:(id)a0;
- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
