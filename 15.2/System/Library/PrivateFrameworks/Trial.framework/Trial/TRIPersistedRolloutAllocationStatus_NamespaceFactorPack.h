@class NSString;

@interface TRIPersistedRolloutAllocationStatus_NamespaceFactorPack : TRIPBMessage

@property (copy, nonatomic) NSString *namespace_p;
@property (nonatomic) BOOL hasNamespace_p;
@property (copy, nonatomic) NSString *factorPack;
@property (nonatomic) BOOL hasFactorPack;

+ (id)descriptor;

@end
