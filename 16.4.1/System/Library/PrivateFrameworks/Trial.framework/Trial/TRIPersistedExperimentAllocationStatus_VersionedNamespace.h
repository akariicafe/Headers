@class NSString;

@interface TRIPersistedExperimentAllocationStatus_VersionedNamespace : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;

+ (id)descriptor;

@end
