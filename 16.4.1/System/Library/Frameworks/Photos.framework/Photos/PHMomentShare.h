@class NSString, PHMomentSharePreview, NSData, NSDate, NSURL;

@interface PHMomentShare : PHAssetCollection <PHShare> {
    PHMomentSharePreview *_preview;
}

@property (readonly, nonatomic) NSData *previewData;
@property (readonly, nonatomic) NSData *thumbnailImageData;
@property (readonly, nonatomic) NSString *scopeIdentifier;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) unsigned long long uploadedPhotosCount;
@property (readonly, nonatomic) unsigned long long uploadedVideosCount;
@property (readonly, nonatomic) PHMomentSharePreview *preview;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL shouldIgnoreBudgets;
@property (readonly, nonatomic) BOOL shouldNotifyOnUploadCompletion;
@property (readonly, nonatomic) unsigned short status;
@property (readonly, nonatomic) short publicPermission;
@property (readonly, nonatomic) unsigned short trashedState;
@property (readonly, nonatomic) short publishState;
@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)fetchLocalMomentShareFromShareURL:(id)a0 error:(id *)a1 options:(id)a2;
+ (id)_fetchLocalMomentShareWithUUID:(id)a0 error:(id *)a1;
+ (void)fetchMomentShareFromShareURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (id)fetchMomentSharesOverlappingAssetCollection:(id)a0 options:(id)a1;
+ (id)invitedMomentSharesExpiringInDays:(unsigned long long)a0;
+ (id)localIdentifierWithUUID:(id)a0;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (BOOL)managedObjectSupportsShareTrashedState;

- (id)preview;
- (unsigned long long)estimatedVideosCount;
- (void).cxx_destruct;
- (unsigned long long)estimatedPhotosCount;
- (void)acceptMomentShareWithCompletion:(id /* block */)a0;
- (unsigned long long)estimatedAssetCount;
- (void)forceSyncMomentShareWithCompletion:(id /* block */)a0;
- (BOOL)shouldPromptUserToIgnoreBudgets;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (void)publishMomentShareWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldSuggestShareBack;

@end
