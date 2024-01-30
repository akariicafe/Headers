@interface TRICKOperationGroupFactory : NSObject

+ (id)groupForScheduledFetch;
+ (id)groupForUserInitiatedFetch;
+ (id)groupForExperimentId:(id)a0;
+ (id)groupForDownloadOptions:(id)a0;
+ (id)groupForRolloutId:(id)a0;

@end
