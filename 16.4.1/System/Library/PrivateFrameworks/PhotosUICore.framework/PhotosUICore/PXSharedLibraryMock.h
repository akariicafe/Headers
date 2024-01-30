@class NSArray, PXSharedLibraryRule, NSString, NSURL;
@protocol PXSharedLibraryParticipant;

@interface PXSharedLibraryMock : NSObject <PXSharedLibrary>

@property (copy, nonatomic) id<PXSharedLibraryParticipant> owner;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) PXSharedLibraryRule *rule;
@property (nonatomic) BOOL isInPreview;
@property (nonatomic) BOOL isPublished;
@property (nonatomic) BOOL isExiting;
@property (nonatomic) BOOL isOwned;
@property (nonatomic) BOOL isDeclined;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long cloudPhotoCount;
@property (readonly, nonatomic) unsigned long long cloudVideoCount;
@property (readonly, nonatomic) unsigned long long cloudItemCount;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) BOOL isInLocalMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })fetchItemCounts;
- (BOOL)canMoveAssetsToPersonalLibrary:(id)a0;
- (void)acceptInvitationWithRule:(id)a0 progress:(id)a1 completion:(id /* block */)a2;
- (void)addAssetSharingSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)addParticipantsWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 presentationEnvironment:(id)a2 withCompletion:(id /* block */)a3;
- (void)addPersonUUIDsToPersonCondition:(id)a0 completion:(id /* block */)a1;
- (BOOL)canAddParticipantsWithEmailAddresses:(id)a0 phoneNumbers:(id)a1;
- (BOOL)canDeleteParticipants:(id)a0;
- (BOOL)canEditParticipants;
- (BOOL)canMoveAssetsToSharedLibrary:(id)a0;
- (BOOL)canRemoveAssetSharingSuggestions:(id)a0;
- (void)declineInvitationWithCompletion:(id /* block */)a0;
- (void)deleteParticipants:(id)a0 presentationEnvironment:(id)a1 withCompletion:(id /* block */)a2;
- (void)exitPreviewWithPresentationEnvironment:(id)a0 completion:(id /* block */)a1;
- (void)exitWithRetentionPolicy:(long long)a0 presentationEnvironment:(id)a1 progress:(id)a2 completion:(id /* block */)a3;
- (void)moveAssetsToPersonalLibrary:(id)a0 completion:(id /* block */)a1;
- (void)moveAssetsToSharedLibrary:(id)a0 completion:(id /* block */)a1;
- (void)moveAssetsWithLocalIdentifiersToSharedLibrary:(id)a0 completion:(id /* block */)a1;
- (void)previewInvitationWithRule:(id)a0 progress:(id)a1 completion:(id /* block */)a2;
- (void)publishPreviewWithPresentationEnvironment:(id)a0 progress:(id)a1 completion:(id /* block */)a2;
- (void)removeAssetSharingSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)removePersonUUIDsFromPersonCondition:(id)a0 completion:(id /* block */)a1;
- (void)restoreDeclinedInvitationWithCompletion:(id /* block */)a0;
- (id)sourceLibraryInfo;

@end
