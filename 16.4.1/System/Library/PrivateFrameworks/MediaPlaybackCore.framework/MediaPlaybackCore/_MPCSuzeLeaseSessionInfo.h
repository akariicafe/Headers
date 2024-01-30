@class ICSuzeLeaseSession, MPCSuzeLeaseSession;

@interface _MPCSuzeLeaseSessionInfo : NSObject

@property (nonatomic) long long clientCount;
@property (readonly, nonatomic) ICSuzeLeaseSession *icLeaseSession;
@property (readonly, nonatomic) MPCSuzeLeaseSession *mpcLeaseSession;
@property (nonatomic) BOOL shouldStopWhenFinished;

- (void).cxx_destruct;
- (id)initWithICLeaseSession:(id)a0;

@end
