@class PLPhotoLibrary;

@interface PLCloudFeedEntriesManager : NSObject

@property (readonly, nonatomic) PLPhotoLibrary *library;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)_noteDidUpdateInvitationRecord:(id)a0;
- (void)_addAsset:(id)a0 toEntry:(id)a1;
- (id)_albumCreatedEntryForSharedAlbum:(id)a0;
- (id /* block */)_assetSortingComparator;
- (BOOL)_commentIsBatchCaption:(id)a0;
- (id /* block */)_commentSortingComparator;
- (id)_dateForAsset:(id)a0;
- (id)_firstEntryAfterDate:(id)a0;
- (id)_firstEntryOnOrAfterDate:(id)a0;
- (id)_firstEntryOnOrBeforeDate:(id)a0;
- (id)_firstEntryRelativeToDate:(id)a0 ascending:(BOOL)a1 includeSameDate:(BOOL)a2;
- (void)_getEarliestDate:(id *)a0 latestDate:(id *)a1 forRangeOfContiguousCommentsEntriesAroundDate:(id)a2;
- (id)_invitationAcceptedEntryForInvitationRecord:(id)a0;
- (id)_invitationDeclinedEntryForInvitationRecord:(id)a0;
- (id)_invitationReceivedEntryForSharedAlbum:(id)a0;
- (void)_mergeEntriesAroundDate:(id)a0;
- (void)_mergeOlderEntry:(id)a0 intoMoreRecentEntry:(id)a1;
- (void)_noteContentDeletionAffectingAlbumCreatedEntry:(id)a0;
- (void)_noteContentDeletionAffectingAssetsEntry:(id)a0;
- (void)_noteContentDeletionAffectingCommentsEntry:(id)a0;
- (void)_noteContentDeletionAffectingInvitationEntry:(id)a0;
- (void)_noteContentDeletionAffectingInvitationResponseEntry:(id)a0;
- (void)_noteContentDeletionAffectingSubscriptionEntry:(id)a0;
- (void)_noteDidReceiveSharedAsset:(id)a0;
- (void)_noteDidReceiveSharedAssetPublishedBeforeSubscription:(id)a0;
- (void)_noteDidReceiveSharedComment:(id)a0;
- (void)_noteDidReceiveSharedComments:(id)a0;
- (void)_noteDidUpdateSharedAlbum:(id)a0;
- (BOOL)_shouldIgnoreAsset:(id)a0;
- (BOOL)_shouldIgnoreComment:(id)a0;
- (BOOL)_shouldIgnoreInvitationRecord:(id)a0;
- (BOOL)_shouldMergeAsset:(id)a0 intoEntry:(id)a1;
- (id)_singleEntryOfType:(long long)a0 forInvitationRecord:(id)a1;
- (id)_singleEntryOfType:(long long)a0 forSharedAlbum:(id)a1;
- (void)_splitEntriesAtDate:(id)a0;
- (id)_subscriptionDateForSharedAlbum:(id)a0;
- (id)_subscriptionEntryForSharedAlbum:(id)a0;
- (BOOL)_tryMergingComment:(id)a0 withEntry:(id)a1;
- (BOOL)_wasAssetPublishedBeforeSubscription:(id)a0;
- (BOOL)_wasCommentPublishedBeforeSubscription:(id)a0;
- (void)processAlbumUpdates:(id)a0 assetInserts:(id)a1 assetUpdates:(id)a2 commentInserts:(id)a3 invitationRecordUpdates:(id)a4 deletionEntries:(id)a5 completionHandler:(id /* block */)a6;
- (void)rebuildAllEntries:(id /* block */)a0;

@end
