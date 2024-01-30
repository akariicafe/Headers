@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject

@property (readonly, nonatomic) ICSuzeLeaseSession *icSuzeLeaseSession;

- (void).cxx_destruct;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (id)initWithICSuzeLeaseSession:(id)a0;

@end
