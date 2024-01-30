@class _ANEDeviceController, NSObject;
@protocol OS_dispatch_semaphore;

@interface _ANEProgramForEvaluation : NSObject

@property (readonly, nonatomic) _ANEDeviceController *controller;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (readonly, nonatomic) char queueDepth;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *requestsInFlight;
@property long long currentAsyncRequestsInFlight;

+ (id)new;
+ (id)programWithHandle:(unsigned long long)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithHandle:(unsigned long long)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;
- (BOOL)processRequest:(id)a0 model:(id)a1 qos:(unsigned int)a2 qIndex:(unsigned long long)a3 modelStringID:(unsigned long long)a4 options:(id)a5 error:(id *)a6;

@end
