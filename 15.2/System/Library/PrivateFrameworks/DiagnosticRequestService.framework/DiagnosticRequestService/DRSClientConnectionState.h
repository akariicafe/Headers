@interface DRSClientConnectionState : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BOOL hasAdminEntitlement;

- (id)initWithConnection:(id)a0 service:(id)a1;
- (void)dealloc;

@end
