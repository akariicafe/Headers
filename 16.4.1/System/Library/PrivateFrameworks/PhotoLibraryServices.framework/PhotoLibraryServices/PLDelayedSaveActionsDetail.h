@class NSArray, NSDictionary, NSSet;

@interface PLDelayedSaveActionsDetail : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *cloudFeedAlbumUpdates;
@property (copy, nonatomic) NSArray *cloudFeedAssetInserts;
@property (copy, nonatomic) NSArray *cloudFeedAssetUpdates;
@property (copy, nonatomic) NSArray *cloudFeedCommentInserts;
@property (copy, nonatomic) NSArray *cloudFeedInvitationRecordUpdates;
@property (copy, nonatomic) NSArray *cloudFeedDeletionEntries;
@property (copy, nonatomic) NSArray *momentInsertsAndUpdates;
@property (copy, nonatomic) NSDictionary *momentDeletes;
@property (copy, nonatomic) NSArray *updatedAssetIDsForHighlights;
@property (copy, nonatomic) NSArray *updatedMomentIDsForHighlights;
@property (copy, nonatomic) NSDictionary *sharedAssetContainerIncrementalChangesByAssetID;
@property (readonly, nonatomic) BOOL shouldHandleMoments;
@property (copy, nonatomic) NSArray *dupeAnalysisNormalInserts;
@property (copy, nonatomic) NSArray *dupeAnalysisCloudInserts;
@property (copy, nonatomic) NSArray *assetsForFilesystemPersistency;
@property (copy, nonatomic) NSDictionary *searchIndexUpdates;
@property (copy, nonatomic) NSSet *albumCountsAndDateRangeUpdates;
@property (copy, nonatomic) NSSet *importSessionCountsAndDateRangeUpdates;
@property (copy, nonatomic) NSSet *assetsForDuetDelete;
@property (copy, nonatomic) NSSet *memoriesForDuetDelete;
@property (nonatomic) BOOL shouldReloadWidgetTimeline;
@property (copy, nonatomic) NSSet *wallpaperSuggestionReloadUUIDs;
@property (nonatomic) BOOL shouldUpdateFeaturedContent;
@property (copy, nonatomic) NSSet *memoriesForAssetUpdate;
@property (copy, nonatomic) NSSet *libraryScopeParticipantsForUpdate;
@property (nonatomic) BOOL libraryScopeRulesUpdated;

+ (id)_decodeMomentDeletes:(id)a0 urlToObjectID:(id /* block */)a1;
+ (id)_decodeSharedAssetContainerIncrementalChanges:(id)a0 urlToObjectID:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)_encodableMomentDeletes;
- (id)initWithCoder:(id)a0;
- (id)_encodableSharedAssetContainerIncrementalChanges;
- (id)init;
- (void).cxx_destruct;

@end
