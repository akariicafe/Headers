@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long maximumAllowableIdentities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;
@property (nonatomic) unsigned long long faceprintRequestRevision;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;

- (int)faceIDModelMaximumElementsPerID;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
