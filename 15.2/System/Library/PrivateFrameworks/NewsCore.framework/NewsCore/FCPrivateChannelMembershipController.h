@class NSString, NSDictionary, NSMutableSet;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSDictionary *_membershipsByChannelID;
    NSMutableSet *_membershipReferences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)commandStoreFileName;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresHighPriorityFirstSync;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;

- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)hasMemberships;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (BOOL)isMemberOfChannelID:(id)a0;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)membershipChannelIDs;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)dealloc;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;

@end
