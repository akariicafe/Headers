@class COStateManager, NSString;

@interface COStateManagerClientInterfaceMediator : NSObject <COStateManagerClientInterface>

@property (readonly, weak, nonatomic) COStateManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
