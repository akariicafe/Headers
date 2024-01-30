@class ACCiAP2ShimAccessory, ACCNavigationAccessory, NSObject;
@protocol OS_dispatch_queue;

@interface ACCNavigationShimAccessory : NSObject

@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) ACCiAP2ShimAccessory *iap2ShimAccessory;
@property (retain, nonatomic) ACCNavigationAccessory *navigationAccessory;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)create_xpc_representation;

@end
