@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AVFragmentedAssetMinderInternal : NSObject {
    NSMutableSet *assets;
    NSObject<OS_dispatch_queue> *accessSerializer;
    double mindingInterval;
}

@end
