@class NSUUID, NSString, NSDate;

@interface HMDAWDRemoteSessionMetric : HMMLogEvent <HMDAWDLogEvent>

@property (nonatomic) BOOL submitted;
@property (retain, nonatomic) NSDate *creation;
@property (readonly, nonatomic) int role;
@property (getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic) int closeReason;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)closeReasonFromError:(id)a0;

- (void)open;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithClientMode:(BOOL)a0 sessionID:(id)a1;
- (id)metricForAWD;

@end
