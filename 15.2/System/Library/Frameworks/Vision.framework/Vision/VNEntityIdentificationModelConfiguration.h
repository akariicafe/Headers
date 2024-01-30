@class VNRequestSpecifier;

@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _maximumEntities;
    unsigned long long _maximumTrainingPrintsPerEntity;
}

@property (class, readonly) unsigned long long maximumAllowableEntities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property unsigned long long maximumEntities;
@property unsigned long long maximumTrainingPrintsPerEntity;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (id)newConfigurationForEntityPrintsGeneratedByRequest:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithEntityPrintOriginatingRequestSpecifier:(id)a0;
- (int)faceIDModelMaximumElementsPerID;

@end
