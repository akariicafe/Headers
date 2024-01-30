@class COCapabilityManager, NSString;

@interface COCapabilityManagerClientInterfaceMediator : NSObject <COCapabilityManagerClientInterface>

@property (readonly, weak, nonatomic) COCapabilityManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)availabilityChanged:(BOOL)a0 ofCapability:(id)a1 inCluster:(id)a2;
- (id)initWithCapabilityManager:(id)a0;

@end
