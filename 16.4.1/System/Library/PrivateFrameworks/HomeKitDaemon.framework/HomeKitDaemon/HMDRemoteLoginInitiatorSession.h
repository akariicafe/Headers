@class NSString, HMMLogEvent;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric;

- (void)dealloc;
- (id)initWithSessionID:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
