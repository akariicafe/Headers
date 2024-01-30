@class NSString, HMMLogEvent;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (void)dealloc;

@end
