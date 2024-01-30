@class TRIFactorsStateRolloutIdentifiers, TRIFactorsStateExperimentIdentifiers;

@interface TRIFactorsState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIFactorsStateExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) TRIFactorsStateRolloutIdentifiers *rolloutIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPersisted:(id)a0;
- (id)persisted;

@end
