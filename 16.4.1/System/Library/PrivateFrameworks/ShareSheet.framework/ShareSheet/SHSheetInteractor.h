@class NSString, SFCollaborationPerformer, SHSheetSession, SHSheetServiceManager, SHSheetActivityPerformer;
@protocol SHSheetActivityPerformerPresentationInterface, SHSheetInteractorDelegate;

@interface SHSheetInteractor : NSObject <SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SFCollaborationPerformerDelegate, SFCollaborationCreationDelegate, SHSheetInteractor>

@property (retain, nonatomic) SHSheetSession *session;
@property (retain, nonatomic) SHSheetServiceManager *serviceManager;
@property (retain, nonatomic) SHSheetActivityPerformer *activityPerformer;
@property (retain, nonatomic) SFCollaborationPerformer *collaborationPerformer;
@property (weak, nonatomic) id<SHSheetInteractorDelegate> delegate;
@property (weak, nonatomic) id<SHSheetActivityPerformerPresentationInterface> activityPresentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSessionStarted;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)startSession;
- (void)performActivity:(id)a0;
- (void)_performActivity:(id)a0;
- (id)initWithContext:(id)a0;
- (void)stopSession;
- (void).cxx_destruct;
- (id)collaborationServiceForSession:(id)a0;
- (void)serviceManager:(id)a0 performActivity:(id)a1;
- (void)showOptionsDidChangeForSession:(id)a0;
- (void)_deleteSharingURL:(id)a0;
- (void)_didPerformActivityWithResult:(id)a0;
- (id)_prepareActivityProxyForRequest:(id)a0;
- (void)_recordActivityInteractionForResult:(id)a0;
- (void)_recordActivityViewControllerInteraction;
- (void)_runActivity:(id)a0;
- (void)_setupServiceManagerIfNeeded;
- (void)addParticipantsAllowedForCollaborationItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)canManageShareForDocumentInSharedFolderWithCompletionHandler:(id /* block */)a0;
- (void)canShareFolderContainingExistingSharedItemsWithCompletionHandler:(id /* block */)a0;
- (void)clearActivityForResult:(id)a0;
- (void)collaborationFooterViewModelDidChangeForSession:(id)a0;
- (id)collaborationServiceForActivityPerformer:(id)a0;
- (id)collaborationSharingResultForActivity:(id)a0;
- (void)createSharingURLForCollaborationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSharingURLWithParticipantsForCollaborationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)didBeginCreationForCollaborationPerformer:(id)a0;
- (void)didCancelCreationForCollaborationPerformer:(id)a0;
- (void)didFailCreationForCollaborationPerformer:(id)a0 error:(id)a1;
- (void)didFinishCreationForCollaborationPerformer:(id)a0;
- (void)favoriteUserDefaultsActivity:(BOOL)a0 withIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)headerMetadataDidChangeForSession:(id)a0;
- (void)isCollaborativeDidChangeForSession:(id)a0;
- (id)linkMetadataForActivityPerformer:(id)a0;
- (void)longPressShareActivityWithIdentifier:(id)a0;
- (void)manageShareForDocumentInSharedFolder;
- (void)performActionActivityWithIdentifier:(id)a0;
- (void)performActivityWithRequest:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)performEditAction;
- (void)performPeopleSuggestion:(id)a0;
- (void)performPersonSuggestionWithIdentifier:(id)a0;
- (void)performShareActivityWithIdentifier:(id)a0;
- (void)performUserDefaultsActivityWithIdentifier:(id)a0 activityCategory:(long long)a1;
- (void)preheatActivitiesIfNeeded;
- (void)provideFeedbackForPeopleSugestionIdentifier:(id)a0;
- (void)removePersonSuggestionWithIdentifier:(id)a0;
- (void)requestSessionConfigurationUpdateAsynchronously:(BOOL)a0;
- (void)serviceManager:(id)a0 didPerformInServiceActivityWithIdentifier:(id)a1 completed:(BOOL)a2 items:(id)a3 error:(id)a4;
- (void)serviceManager:(id)a0 didUpdateAirDropTransferWithChange:(id)a1;
- (id)serviceManager:(id)a0 identificationResultsFromSuggestedImageData:(id)a1;
- (void)serviceManager:(id)a0 performAirdropViewActivityWithNoContentView:(BOOL)a1;
- (void)serviceManager:(id)a0 performUserDefaultsActivityWithContext:(id)a1;
- (void)serviceManager:(id)a0 willPerformActivityInServiceForRequest:(id)a1 completion:(id /* block */)a2;
- (void)serviceManagerDidChangeConnectionState:(id)a0;
- (void)sessionConfigurationDidChangeForSession:(id)a0;
- (void)setWantsCollaborativeSession:(BOOL)a0;
- (void)shareStatusForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)toggleUserDefaultsActivityWithIdentifier:(id)a0 activityCategory:(long long)a1;
- (void)updateSessionWithContext:(id)a0;
- (void)updateUserDefaultsFavorites:(id)a0 activityCategory:(long long)a1;

@end
