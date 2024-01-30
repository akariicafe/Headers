@class SKRSharedFlowPluginXPCServer;

@interface SKRExecutionListenerManager : NSObject

@property (readonly, nonatomic) SKRSharedFlowPluginXPCServer *sharedPluginServer;

- (id)init;
- (void).cxx_destruct;

@end
