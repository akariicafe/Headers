@class NSDictionary, NSMutableSet, NSString;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving>

@property (retain, nonatomic) NSDictionary *membershipsByChannelID;
@property (retain, nonatomic) NSMutableSet *membershipReferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedSync;

- (void)_refreshPublicMembershipsWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowAllDraftContent;
- (void)addItem:(id)a0 toStore:(BOOL)a1;
- (id)feedDescriptorForDraftFeedForChannel:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)isMemberOfChannelID:(id)a0;
- (id)membershipChannelIDs;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)removeItemWithItemID:(id)a0;
- (void)dealloc;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)addObserver:(id)a0;
- (void)refreshPublicMemberships;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)a0;
- (void)isAllowedToSeeIssueID:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadLocalCachesFromStore;
- (void)_fetchPrivateChannelMembershipsWithCompletion:(id /* block */)a0;
- (void)fetchMembershipsWithIDs:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)hasMemberships;
- (id)referenceToMembershipForMembershipID:(id)a0;
- (void)changedMembershipsFrom:(id)a0 toMemberships:(id)a1;
- (void)isAllowedToSeeArticleID:(id)a0 completionBlock:(id /* block */)a1;

@end
