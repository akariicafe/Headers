@class MCMError, NSString, MCMConcreteContainerIdentityForLibsystem;

@interface MCMResultWithLinkBase : MCMResultBase <MCMResultWithLink>

@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerAIdentity;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerBIdentity;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, nonatomic) BOOL implied;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)encodeResultOntoReply:(id)a0;
- (void).cxx_destruct;
- (BOOL)encodeLinkOntoXPCObject:(id)a0;
- (id)initWithContainerAIdentity:(id)a0 containerBIdentity:(id)a1 attributes:(unsigned long long)a2 implied:(BOOL)a3;
- (id)initWithResolvedLink:(id)a0;

@end
