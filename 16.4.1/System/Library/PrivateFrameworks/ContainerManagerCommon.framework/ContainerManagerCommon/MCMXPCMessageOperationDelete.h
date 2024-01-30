@interface MCMXPCMessageOperationDelete : MCMXPCMessageWithConcreteContainersArrayBase <MCMParametersOperationDelete>

@property (readonly, nonatomic) BOOL traverseLinks;
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
