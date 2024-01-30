@class NSObject;
@protocol OS_dispatch_queue;

@interface NRDeviceManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)copySharedDeviceManager;

- (id)initInternal;
- (void).cxx_destruct;
- (void)registerDevice:(id)a0 properties:(id)a1 queue:(id)a2 completionBlock:(id /* block */)a3;
- (void)unregisterDevice:(id)a0;
- (void)disableDevice:(id)a0;
- (void)enableDevice:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)enableDevice:(id)a0;
- (void)unregisterAllDevicesWithQueue:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyDeviceListString;
- (void)unregisterDevice:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)disableDevice:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;

@end
