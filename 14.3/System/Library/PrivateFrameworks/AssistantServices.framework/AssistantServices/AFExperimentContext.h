@class NSDictionary, AFExperiment;
@protocol AFInvocationFeedbackExperiment, AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior;

@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFExperiment<AFExperimentForSiriVOXSounds> *experimentForSiriVOXSounds;
@property (readonly, nonatomic) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *experimentForSiriVOXTapToSiriBehavior;
@property (readonly, nonatomic) AFExperiment<AFInvocationFeedbackExperiment> *invocationFeedbackExperiment;
@property (readonly, copy, nonatomic) NSDictionary *experimentsByConfigurationIdentifier;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithExperimentsByConfigurationIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
