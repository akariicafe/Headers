@class NSString, NSArray, _UIActivityApplicationExtensionDiscovery;
@protocol _UIActivityHelperDelegate;

@interface _UIActivityHelper : NSObject

@property (readonly, weak, nonatomic) id<_UIActivityHelperDelegate> delegate;
@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery;
@property (readonly, nonatomic) NSArray *cachedBuiltinActivities;
@property (nonatomic) BOOL primed;
@property (copy, nonatomic) id /* block */ fetchShortcutsBlock;

+ (id)builtinActivityClasses;

- (id)_defaultSortItemForBuiltinActivity:(id)a0;
- (void).cxx_destruct;
- (id)_defaultSortOrderForOpenInAppActivity:(id)a0;
- (void)preheatAvailableActivitiesForMatchingContext:(id)a0;
- (id)_activitiesByApplyingDefaultOrdering:(id)a0;
- (void)registerPendingContinuousExtensionsDiscovery;
- (id)_activitiesByApplyingBeforeTypePinningToActivities:(id)a0 activitiesToBeforeTypePin:(id)a1;
- (id)_defaultOrderingDescriptorForActivity:(id)a0;
- (id)_defaultSortOrderForBuiltInElevatedActivity:(id)a0;
- (void)_enumerateAvailableActivitiesForMatchingContext:(id)a0 intoMatchingResults:(id)a1 matchingResultsUpdateBlock:(id /* block */)a2 enumerateActivityBlock:(id /* block */)a3;
- (id)_defaultSortOrderForApplicationDefinedActivity:(id)a0;
- (id)reportExtensionsCacheResult;
- (id)_defaultSortOrderForOtherActivity:(id)a0;
- (id)_activitiesByDuetOrderingActivities:(id)a0;
- (id)_defaultSortOrderForShortcutActivity:(id)a0;
- (id)_activitiesByApplyingFavoriteOrderingToActivities:(id)a0 favoriteActivityTypes:(id)a1;
- (id)initWithDelegate:(id)a0 sessionID:(id)a1 fetchShortcutsBlock:(id /* block */)a2;
- (void)primeWithDiscoveryContext:(id)a0;
- (id)activitiesByOrderingActivities:(id)a0 applyDefaultOrdering:(BOOL)a1 applyBeforeTypePinning:(BOOL)a2 activityTypeOrdering:(id)a3 bypassDuet:(BOOL)a4;
- (id)_activitiesByTypeOrderingActivities:(id)a0 activityTypeOrdering:(id)a1;
- (id)_defaultSortOrderForExtensionBasedActivity:(id)a0;
- (id)orderedAvailableActivitiesForMatchingContext:(id)a0;

@end
