@class TRIPBStringEnumDictionary;

@interface TRIClientNamespaceMetadata : TRIPBMessage

@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (retain, nonatomic) TRIPBStringEnumDictionary *factorNamePurgeabilityLevels;
@property (readonly, nonatomic) unsigned long long factorNamePurgeabilityLevels_Count;

+ (id)descriptor;

@end
