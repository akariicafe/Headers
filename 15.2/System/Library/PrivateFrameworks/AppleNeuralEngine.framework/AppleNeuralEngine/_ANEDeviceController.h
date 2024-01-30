@interface _ANEDeviceController : NSObject

@property (nonatomic) long long usecount;
@property (readonly, nonatomic) BOOL isPrivileged;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) struct ANEDeviceStruct { void *x0; void *x1; void *x2; unsigned char x3; int x4; } *device;

+ (void)initialize;
+ (id)new;
+ (id)controllerWithProgramHandle:(unsigned long long)a0;
+ (id)sharedPrivilegedConnection;

- (void)start;
- (id)init;
- (void)stop;
- (id)initWithProgramHandle:(unsigned long long)a0 priviledged:(BOOL)a1;

@end
