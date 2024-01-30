@interface _PSAppUsageUtilities : NSObject

+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)a0;
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1 knowledgeStore:(id)a2;
+ (void)cacheSharingAppUsageDurations:(id)a0;
+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1 knowledgeStore:(id)a2;
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)a0 knowledgeStore:(id)a1;
+ (id)sharingAppUsageDurations;

@end
