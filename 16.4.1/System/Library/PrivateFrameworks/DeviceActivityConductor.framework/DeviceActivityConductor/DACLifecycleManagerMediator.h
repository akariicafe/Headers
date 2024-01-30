@class NSString, DACLifecycleManager;

@interface DACLifecycleManagerMediator : NSObject <DACLifecycleClientInterface>

@property (readonly, weak, nonatomic) DACLifecycleManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
