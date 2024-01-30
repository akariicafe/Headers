@class NSUUID, NSString, NSDate;

@interface HMDAWDRemoteSessionMetric : HMDLogEvent <HMDAWDLogEvent>

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

+ (void)initialize;
+ (id)uuid;
+ (int)closeReasonFromError:(id)a0;

- (void).cxx_destruct;
- (void)open;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithClientMode:(BOOL)a0 sessionID:(id)a1;

@end
