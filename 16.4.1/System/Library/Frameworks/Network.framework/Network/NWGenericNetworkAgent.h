@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription>

@property struct netagent { unsigned char x0[16]; char x1[32]; char x2[32]; char x3[128]; unsigned int x4; unsigned int x5; unsigned char x6[0]; } *internalNetagent;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSString *agentDomain;
@property (readonly, nonatomic) NSString *agentType;
@property (readonly, nonatomic) NSString *agentDescription;
@property (readonly, nonatomic) NSUUID *agentUUID;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (readonly, nonatomic, getter=isUserActivated) BOOL userActivated;
@property (readonly, nonatomic, getter=isVoluntary) BOOL voluntary;
@property (readonly, nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (readonly, nonatomic, getter=isNetworkProvider) BOOL networkProvider;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (BOOL)supportsGroups;
- (void)dealloc;
- (id)description;
- (BOOL)isNexusProvider;
- (BOOL)supportsResolve;
- (id)initWithKernelAgent:(const struct netagent { unsigned char x0[16]; char x1[32]; char x2[32]; char x3[128]; unsigned int x4; unsigned int x5; unsigned char x6[0]; } *)a0;
- (BOOL)requiresAssert;
- (BOOL)supportsBrowse;

@end
