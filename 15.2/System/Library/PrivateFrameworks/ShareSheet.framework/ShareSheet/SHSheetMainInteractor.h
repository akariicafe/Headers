@class NSString, SHSheetSession, SHSheetServiceManager, SHSheetActivityPerformer;
@protocol SHSheetMainInteractorDelegate, SHSheetActivityPerformerPresentationInterface;

@interface SHSheetMainInteractor : NSObject <SHSheetServiceManagerDelegate, SHSheetSessionDelegate, SHSheetActivityPerformerDelegate, SHSheetMainInteractorInterface>

@property (retain, nonatomic) SHSheetSession *session;
@property (retain, nonatomic) SHSheetServiceManager *serviceManager;
@property (retain, nonatomic) SHSheetActivityPerformer *activityPerformer;
@property (weak, nonatomic) id<SHSheetMainInteractorDelegate> delegate;
@property (weak, nonatomic) id<SHSheetActivityPerformerPresentationInterface> activityPresentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSessionStarted;

- (void)applicationWillEnterForeground;
- (void)_performActivity:(id)a0;
- (void)applicationDidEnterBackground;
- (void)startSession;
- (void)preheatActivitiesIfNeeded;
- (id)initWithContext:(id)a0;
- (void)performActivity:(id)a0;
- (void).cxx_destruct;
- (void)updateSessionWithContext:(id)a0;
- (void)requestSessionConfigurationUpdateAsynchronously:(BOOL)a0;
- (void)clearActivityForResult:(id)a0;
- (void)performPeopleSuggestion:(id)a0;
- (void)performPersonSuggestionWithIdentifier:(id)a0;
- (void)removePersonSuggestionWithIdentifier:(id)a0;
- (void)longPressShareActivityWithIdentifier:(id)a0;
- (void)performShareActivityWithIdentifier:(id)a0;
- (void)performActionActivityWithIdentifier:(id)a0;
- (void)performEditAction;
- (void)toggleUserDefaultsActivityWithIdentifier:(id)a0 activityCategory:(long long)a1;
- (void)favoriteUserDefaultsActivity:(BOOL)a0 withIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)updateUserDefaultsFavorites:(id)a0 activityCategory:(long long)a1;
- (void)performUserDefaultsActivityWithIdentifier:(id)a0 activityCategory:(long long)a1;
- (void)performActivityWithRequest:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)_recordActivityInteractionForResult:(id)a0;
- (void)_runActivity:(id)a0;
- (id)_prepareActivityProxyForRequest:(id)a0;
- (void)_recordActivityViewControllerInteraction;
- (void)_didPerformActivityWithResult:(id)a0;
- (void)serviceManagerDidChangeConnectionState:(id)a0;
- (void)serviceManager:(id)a0 performActivity:(id)a1;
- (void)serviceManager:(id)a0 performUserDefaultsActivityWithContext:(id)a1;
- (void)serviceManager:(id)a0 performAirdropViewActivityWithNoContentView:(BOOL)a1;
- (void)serviceManager:(id)a0 didUpdateAirdropTransferWithContext:(id)a1;
- (void)sessionConfigurationDidChangeForSession:(id)a0;
- (void)serviceManager:(id)a0 willPerformActivityInServiceForRequest:(id)a1 completion:(id /* block */)a2;
- (void)wantsObjectManipulationDidChangeForSession:(id)a0;
- (id)linkMetadataForActivityPerformer:(id)a0;
- (void)stopSession;

@end
