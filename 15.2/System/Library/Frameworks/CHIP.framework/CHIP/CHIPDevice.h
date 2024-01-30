@class NSRecursiveLock;

@interface CHIPDevice : NSObject

@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly) void *cppDevice;

- (id)initWithDevice:(void *)a0;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)init;
- (void *)internalDevice;
- (BOOL)openPairingWindow:(unsigned long long)a0 error:(id *)a1;
- (id)openPairingWindowWithPIN:(unsigned long long)a0 discriminator:(unsigned long long)a1 setupPIN:(unsigned long long)a2 error:(id *)a3;

@end
