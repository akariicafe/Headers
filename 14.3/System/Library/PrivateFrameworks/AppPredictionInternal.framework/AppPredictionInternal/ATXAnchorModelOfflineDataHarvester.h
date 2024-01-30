@class NSArray, NSUUID, ATXAnchorModelEventFeaturizer;

@interface ATXAnchorModelOfflineDataHarvester : NSObject {
    NSArray *_anchorsToCollect;
    ATXAnchorModelEventFeaturizer *_eventFeaturizer;
    NSUUID *_userId;
}

+ (id)getUserUUIDForDataCollection;
+ (id)getSamplingGroupForDataCollection;
+ (void)resetSamplingGroupAssignmentForUser;
+ (id)bundleIdsFromAppLaunchesInMessage:(id)a0;
+ (id)actionIdentifiersFromActionsInMessage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)allInstalledAppsKnownToSpringBoard;
- (id)initWithSamplingGroup:(id)a0 userId:(id)a1;
- (void)harvestDataForAnchor:(id)a0;
- (id)fetchAnchorEvents:(id)a0;
- (id)processAnchorOccurrence:(id)a0 anchor:(id)a1;
- (void)addAppLaunchEventsFromAnchorOccurrenceDate:(id)a0 toMessage:(id)a1;
- (void)addActionEventsFromAnchorOccurrenceDate:(id)a0 toMessage:(id)a1;
- (void)addNegativeSamplesForAnchorOccurrenceDate:(id)a0 toMessage:(id)a1;
- (id)fetchEventsAfterAnchorOccurrenceDate:(id)a0 withDuetDataProviderClass:(Class)a1 limit:(unsigned long long)a2 maxSecondsBeforeAnchor:(long long)a3 maxSecondsAfterAnchor:(long long)a4;
- (void)setNegativeAppLaunchSamplesForAnchorOccurrenceDate:(id)a0 mainMessage:(id)a1;
- (void)setNegativeActionSamplesForAnchorOccurrenceDate:(id)a0 mainMessage:(id)a1;
- (void)harvestData;

@end
