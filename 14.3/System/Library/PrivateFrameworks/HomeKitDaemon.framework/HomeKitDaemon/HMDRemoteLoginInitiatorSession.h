@class NSString, HMDLogEvent;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSessionID:(id)a0;

@end
