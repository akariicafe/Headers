@class NSArray, NSMapTable, NSMutableOrderedSet, PRPosterConfiguration;

@interface PRMutableSwitcherConfiguration : PRSwitcherConfiguration {
    NSMapTable *_overriddenFocusConfigurationForPosterConfiguration;
    NSMapTable *_overriddenHomescreenConfigurationForPosterConfiguration;
    NSMapTable *_incomingPosterConfigurationsToBeAssocatedWithExistingPosterConfigurationsUUIDs;
    NSMutableOrderedSet *_pathsToIngest;
}

@property (retain, nonatomic) PRPosterConfiguration *selectedConfiguration;
@property (retain, nonatomic) PRPosterConfiguration *desiredActiveConfiguration;
@property (copy, nonatomic) NSArray *configurations;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)incomingPosterConfigurationsToBeAssocatedWithExistingPosterConfigurationsUUIDs;
- (void)ingestNewPosterConfiguration:(id)a0 toBeAssociatedWithUUID:(id)a1;
- (void)ingestNewPosterConfiguration:(id)a0 toBeAssociatedWithHomeScreenConfiguration:(id)a1;
- (id)posterConfigurationsNeedingHomeScreenConfigurationUpdates;
- (id)homeConfigurationForPoster:(id)a0;
- (id)focusConfigurationForPoster:(id)a0;
- (void)removeConfiguration:(id)a0;
- (id)posterConfigurationsNeedingFocusConfigurationUpdates;
- (void)setHomeConfiguration:(id)a0 forPosterConfiguration:(id)a1;
- (void)ingestNewPosterConfiguration:(id)a0;
- (void)setFocusConfiguration:(id)a0 forPosterConfiguration:(id)a1;
- (id)posterConfigurationsNeedingFocusConfigurationDeleted;
- (void).cxx_destruct;
- (id)incomingPosterConfigurations;

@end
