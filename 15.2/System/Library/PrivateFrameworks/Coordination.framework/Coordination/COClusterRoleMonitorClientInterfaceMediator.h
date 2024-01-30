@class NSString, COClusterRoleMonitor;

@interface COClusterRoleMonitorClientInterfaceMediator : NSObject <COClusterRoleMonitorClientInterface>

@property (readonly, weak, nonatomic) COClusterRoleMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)roleOfMember:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (id)initWithClusterRoleMonitor:(id)a0;

@end
