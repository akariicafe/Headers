@class NSObject;
@protocol OS_dispatch_queue;

@interface _ANEDeviceController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q;
@property (nonatomic) long long usecount;
@property (readonly, nonatomic) BOOL isPrivileged;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) struct { void *x0; void *x1; void *x2; } *device;

+ (id)controllerWithProgramHandle:(unsigned long long)a0;
+ (id)sharedPrivilegedConnection;

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWithProgramHandle:(unsigned long long)a0 priviledged:(BOOL)a1;

@end
