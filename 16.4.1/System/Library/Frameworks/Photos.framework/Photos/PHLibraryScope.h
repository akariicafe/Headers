@class NSString, NSData, NSURL, NSDate;

@interface PHLibraryScope : PHObject <PHShare>

@property (readonly, nonatomic) short scopeSyncingState;
@property (readonly, nonatomic) NSString *scopeIdentifier;
@property (readonly, nonatomic) NSData *rulesData;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) short participantCloudUpdateState;
@property (readonly, nonatomic) short autoSharePolicy;
@property (readonly, nonatomic) short previewState;
@property (readonly, nonatomic) BOOL libraryScopeInLocalMode;
@property (readonly, nonatomic) long long exitState;
@property (readonly, nonatomic) unsigned long long cloudPhotoCount;
@property (readonly, nonatomic) unsigned long long cloudVideoCount;
@property (readonly, nonatomic) unsigned long long cloudItemCount;
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
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)_estimatedAssetCountToMoveForExitRetentionPolicyContributedOnly:(BOOL)a0 options:(id)a1 error:(id *)a2;
+ (unsigned long long)estimatedAssetCountToMoveForExitRetentionPolicyContributedOnly:(BOOL)a0 imageCount:(unsigned long long *)a1 videoCount:(unsigned long long *)a2 audioCount:(unsigned long long *)a3 itemCount:(unsigned long long *)a4 options:(id)a5 error:(id *)a6;
+ (id)fetchActiveLibraryScopeWithOptions:(id)a0;
+ (void)fetchLibraryScopeFromShareURL:(id)a0 ignoreExistingShare:(BOOL)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (void)fetchLibraryScopeFromShareURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (id)fetchLibraryScopesWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchLibraryScopesWithOptions:(id)a0;
+ (id)fetchPendingLibraryScopeInvitationWithOptions:(id)a0;
+ (id)fetchPreviewLibraryScopeWithOptions:(id)a0;
+ (id)localIdentifierWithUUID:(id)a0;
+ (BOOL)managedObjectSupportsShareExitingState;
+ (BOOL)managedObjectSupportsShareExpiredState;
+ (BOOL)managedObjectSupportsShareTrashedState;
+ (BOOL)removePersonRulesOnActiveLibraryScopeWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithPhotoLibrary:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)acceptLibraryScopeWithCompletion:(id /* block */)a0;
- (id)activateLibraryScopeWithCompletion:(id /* block */)a0;
- (Class)changeRequestClass;
- (void)deactivateLibraryScopeWithCompletion:(id /* block */)a0;
- (void)getCloudStatusCountsWithCompletionHandler:(id /* block */)a0;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)markOnboardingPreviewAssetsByProcessingRulesWithCompletion:(id /* block */)a0;
- (void)publishLibraryScopeWithCompletionHandler:(id /* block */)a0;
- (void)removeParticipants:(id)a0 exitSource:(long long)a1 completion:(id /* block */)a2;
- (void)startExitFromLibraryScopeWithRetentionPolicy:(long long)a0 exitSource:(long long)a1 completion:(id /* block */)a2;
- (void)unsharePendingAssetsSharedToScope;

@end
