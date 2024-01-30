@class NSXPCListener, NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, AFSiriTaskmasterDelegate, AFSiriTaskDelivering;

@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling> {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    NSMapTable *_executorForRequest;
}

@property (weak, nonatomic) id<AFSiriTaskmasterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)a0;
+ (id)taskmasterForMachServiceWithName:(id)a0;
+ (id)taskmasterForUIApplicationWithBundleIdentifier:(id)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleFailureOfRequest:(id)a0 error:(id)a1 atTime:(unsigned long long)a2;
- (void)handleFailureOfRequest:(id)a0 error:(id)a1 atTime:(unsigned long long)a2;
- (void)handleSiriRequest:(id)a0 deliveryHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)handleSiriTaskUsageResult:(id)a0 fromRequest:(id)a1;
- (id)initWithTaskDeliverer:(id)a0;

@end
