@class AVTImageStore, NSArray, AVTCoreModel, AVTAvatarConfigurationImageRenderer, AVTUIEnvironment;
@protocol AVTUILogger;

@interface AVTAvatarRecordImageGenerator : NSObject

@property (readonly, nonatomic) AVTImageStore *imageStore;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer;
@property (readonly, nonatomic) AVTCoreModel *coreModel;
@property (readonly, copy, nonatomic) NSArray *scopes;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTUIEnvironment *environment;

+ (id)supportedScopesForScale:(double)a0;

- (void).cxx_destruct;
- (BOOL)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)generateThumbnailForAvatarRecordItem:(id)a0 avatarConfiguration:(id)a1 scope:(id)a2 error:(id *)a3;
- (BOOL)generateThumbnailsForAvatarRecord:(id)a0 avatar:(id)a1 error:(id *)a2;
- (BOOL)generateThumbnailsForAvatarRecords:(id)a0 error:(id *)a1;
- (BOOL)generateThumbnailsForDuplicateAvatarRecord:(id)a0 originalRecord:(id)a1 error:(id *)a2;
- (id)initWithImageStore:(id)a0 coreEnvironment:(id)a1;
- (id)initWithImageStore:(id)a0 renderer:(id)a1 environment:(id)a2;
- (void)updateThumbnailsForChangesWithTracker:(id)a0 recordProvider:(id /* block */)a1;

@end
