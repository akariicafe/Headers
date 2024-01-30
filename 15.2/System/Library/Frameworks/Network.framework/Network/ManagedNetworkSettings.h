@class NSObject;
@protocol OS_dispatch_queue;

@interface ManagedNetworkSettings : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedMNS;

- (void)reloadNetworkdSettings;
- (void)reloadMNS;
- (void)handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
