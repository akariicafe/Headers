@interface MCMXPCMessageLinkRemove : MCMXPCMessageWithLinkBase <MCMParametersLinkRemove>

@property (readonly, nonatomic) unsigned long long attributes;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (unsigned int)disposition;

@end
