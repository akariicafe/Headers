@class UISUIActivityViewControllerConfiguration, SFShareSheetSlotManager, SHSheetSession, NSString;
@protocol SHSheetServiceManagerDelegate;

@interface SHSheetServiceManager : NSObject <SFShareSheetSlotManagerDelegate, SHSheetHostServiceInterface>

@property (readonly, nonatomic) SFShareSheetSlotManager *slotManager;
@property (retain, nonatomic) UISUIActivityViewControllerConfiguration *hostConfiguration;
@property (nonatomic) BOOL updateAfterConnection;
@property (readonly, nonatomic) SHSheetSession *session;
@property (weak, nonatomic) id<SHSheetServiceManagerDelegate> delegate;
@property (readonly, nonatomic) long long connectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)applicationWillEnterForeground;
- (id)initWithSession:(id)a0;
- (void)setConnectionState:(long long)a0;
- (void)applicationDidEnterBackground;
- (void)performAirDropActivityInHostWithNoContentView:(BOOL)a0;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)a0;
- (void)performUserDefaultsWithFavoritesProxies:(id)a0 suggestionProxies:(id)a1 orderedUUIDs:(id)a2 activityCategory:(long long)a3;
- (void)performExtensionActivityInHostWithBundleID:(id)a0 request:(id)a1;
- (void)performActivityInHostWithUUID:(id)a0;
- (void)performShortcutActivityInHostWithBundleID:(id)a0 singleUseToken:(id)a1;
- (void)willPerformInServiceActivityWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)setProgress:(id)a0 withTopText:(id)a1 bottomText:(id)a2 forNodeWithIdentifier:(id)a3 shouldPulse:(id)a4 animated:(BOOL)a5;
- (void).cxx_destruct;
- (void)connectionInterrupted;
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
- (void)updateAsynchronously:(BOOL)a0;
- (void)reportActivityWithInfo:(id)a0;
- (void)provideFeedbackForPeopleSugestionIdentifier:(id)a0;
- (void)dealloc;
- (void)_invalidateSlotManagerIfNeeded;
- (void)_handleConnectionCompletion;
- (void)_sendConfiguration:(id)a0;

@end
