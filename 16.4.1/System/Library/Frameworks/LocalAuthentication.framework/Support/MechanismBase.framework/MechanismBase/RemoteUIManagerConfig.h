@class NSObject;
@protocol OS_dispatch_queue, RemoteUIActivating;

@interface RemoteUIManagerConfig : NSObject

@property (nonatomic) double activateTimeout;
@property (nonatomic) double deactivateTimeout;
@property (retain, nonatomic) id<RemoteUIActivating> activator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;

@end
