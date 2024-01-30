@class MCMContainerIdentity;

@interface MCMXPCMessageLinkExists : MCMXPCMessageBase <MCMParametersLinkExists>

@property (readonly, nonatomic) MCMContainerIdentity *containerAIdentity;
@property (readonly, nonatomic) MCMContainerIdentity *containerBIdentity;
@property (readonly, nonatomic) unsigned long long attributes;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (unsigned int)disposition;
- (void).cxx_destruct;

@end
