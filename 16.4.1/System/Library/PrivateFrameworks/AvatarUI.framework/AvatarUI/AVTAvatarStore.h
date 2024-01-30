@class AVTImageStore, NSString, AVTAvatarRecordImageGenerator;
@protocol AVTUILogger, AVTStickerBackendDelegate, AVTAvatarStoreInternal, AVTAvatarStore;

@interface AVTAvatarStore : NSObject <AVTPBackendImageHandlingDelegate, AVTAvatarStoreInternal, AVTAvatarStore>

@property (readonly, nonatomic) AVTAvatarRecordImageGenerator *imageGenerator;
@property (readonly, nonatomic) id<AVTAvatarStore> persistenceAvatarStore;
@property (readonly, nonatomic) AVTImageStore *imageStore;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (weak, nonatomic) id<AVTAvatarStoreInternal> internalStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTStickerBackendDelegate> stickerBackendDelegate;

+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (id)defaultImageGeneratorForEnvironment:(id)a0;
+ (unsigned long long)maximumNumberOfSavableAvatars;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canCreateAvatar;
- (id)avatarsForFetchRequest:(id)a0 error:(id *)a1;
- (void)fetchAvatarsForFetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAvatar:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPersistenceAvatarStore:(id)a0;
- (BOOL)canCreateAvatarWithError:(id *)a0;
- (void)clearContentAtLocation:(id)a0;
- (void)clearStickersForAvatarRecordIdentifier:(id)a0 withEnvironment:(id)a1;
- (void)deleteAvatarWithIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)deleteImagesForAvatarRecordIdentifier:(id)a0 error:(id *)a1;
- (void)deleteRecentStickersForChangeTracker:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)a0 error:(id *)a1;
- (void)didUseStickerWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)duplicateAvatar:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)generateThumbnailsForAvatarRecord:(id)a0 avatar:(id)a1 error:(id *)a2;
- (BOOL)generateThumbnailsForAvatarRecords:(id)a0 error:(id *)a1;
- (BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)a0 originalRecord:(id)a1 error:(id *)a2;
- (id)initWithImageGenerator:(id)a0 environment:(id)a1;
- (id)initWithPersistenceAvatarStore:(id)a0 imageGenerator:(id)a1 environment:(id)a2;
- (id)initWithPersistenceAvatarStore:(id)a0 imageGenerator:(id)a1 imageStore:(id)a2 environment:(id)a3;
- (id)recentStickersForFetchRequest:(id)a0 error:(id *)a1;
- (void)saveAvatarRecord:(id)a0 thumbnailAvatar:(id)a1 completionBlock:(id /* block */)a2 thumbnailGenerationCompletionBlock:(id /* block */)a3;
- (void)updateThumbnailsForChangesWithTracker:(id)a0 recordProvider:(id /* block */)a1;

@end
