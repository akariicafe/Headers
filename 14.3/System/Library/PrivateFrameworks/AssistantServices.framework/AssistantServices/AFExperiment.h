@class NSString, NSDictionary;

@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL playsTwoShotSoundForSiriVOXSounds;
@property (readonly, nonatomic) BOOL playsSessionInactiveSoundForSiriVOXSounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL playsSound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configurationIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationVersion;
@property (readonly, copy, nonatomic) NSString *deploymentGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *deploymentGroupProperties;
@property (readonly, nonatomic) long long deploymentReason;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)logExperimentExposureForSiriVOXSounds;
- (BOOL)isEqual:(id)a0;
- (void)logExperimentExposureForInvocationFeedbacks;
- (BOOL)isFeatureGroupOneEnabled;
- (BOOL)isFeatureGroupTwoEnabled;
- (BOOL)isFeatureGroupThreeEnabled;
- (BOOL)isFeatureGroupFourEnabled;
- (id)initWithConfigurationIdentifier:(id)a0 configurationVersion:(id)a1 deploymentGroupIdentifier:(id)a2 deploymentGroupProperties:(id)a3 deploymentReason:(long long)a4;
- (void)logExperimentExposureForTapToSiriBehavior;
- (void)encodeWithCoder:(id)a0;

@end
