@class _ANEDeviceController, NSObject;
@protocol OS_dispatch_semaphore;

@interface _ANEProgramForEvaluation : NSObject

@property (readonly, nonatomic) _ANEDeviceController *controller;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (readonly, nonatomic) char queueDepth;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *requestsInFlight;
@property (nonatomic) long long currentAsyncRequestsInFlight;

+ (id)new;
+ (id)programWithHandle:(unsigned long long)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithHandle:(unsigned long long)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;
- (BOOL)processRequest:(id)a0 qos:(unsigned int)a1 qIndex:(unsigned long long)a2 modelStringID:(unsigned long long)a3 options:(id)a4 error:(id *)a5;

@end
