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
- (BOOL)isFeatureGroupFourEnabled;
- (BOOL)isFeatureGroupThreeEnabled;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)logExperimentExposureForInvocationFeedbacks;
- (void)logExperimentExposureForTapToSiriBehavior;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isFeatureGroupTwoEnabled;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isFeatureGroupOneEnabled;
- (void)logExperimentExposureForSiriVOXSounds;
- (id)initWithConfigurationIdentifier:(id)a0 configurationVersion:(id)a1 deploymentGroupIdentifier:(id)a2 deploymentGroupProperties:(id)a3 deploymentReason:(long long)a4;

@end
