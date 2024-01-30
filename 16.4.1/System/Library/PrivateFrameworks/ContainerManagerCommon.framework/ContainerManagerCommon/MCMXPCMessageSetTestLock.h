@interface MCMXPCMessageSetTestLock : MCMXPCMessageBase <MCMParametersSetTestLock>

@property (readonly, nonatomic) unsigned long long requestedLocks;
@property (readonly, nonatomic) BOOL enable;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
