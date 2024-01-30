@interface MCMXPCMessageGetPrimordialDataContainer : MCMXPCMessageBase <MCMParametersGetPrimordialDataContainer>

@property (readonly, nonatomic) BOOL useCodeSignDatabase;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
