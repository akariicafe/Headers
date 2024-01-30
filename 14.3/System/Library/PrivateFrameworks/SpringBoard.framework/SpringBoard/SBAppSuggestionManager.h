@class SBBestAppSuggestion, NSString, SBAttentionAwarenessClient, _DECConsumer, _DECResult, UABestAppSuggestion, NSCountedSet, UABestAppSuggestionManager;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate> {
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    _DECConsumer *_expertCenterSuggestionMonitor;
    _DECResult *_currentExpertBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    BOOL _isListeningForContinuitySuggestion;
    BOOL _isListeningForExpertCenterSuggestion;
    BOOL _screenOnDueToUserEvent;
    BOOL _screenOnAndLookingForEvent;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_handleAppUninstall:(id)a0;
- (void)_createSuggestionSources;
- (void)_stopListeningForNotifications;
- (void)_setContinuitySuggestionUpdatesEnabled:(BOOL)a0 expertCenterSuggestionUpdatesEnabled:(BOOL)a1;
- (void)startFetchingPayloadForAppSuggestion:(id)a0;
- (void)_screenDidUndim:(id)a0;
- (id)init;
- (void)noteNotActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_listenForNotifications;
- (void)_evaluateSuggestionUpdates:(id)a0;
- (void)_destroySuggestionSources;
- (id)currentSuggestedApp;
- (void)expertCenterSuggestionChanged:(id)a0;
- (void)_screenDidDim:(id)a0;
- (unsigned long long)_supportedExpertCenterCategories;
- (void)performWithCurrentSuggestedAppAndApplication:(id /* block */)a0;
- (void)clientDidResetForUserAttention:(id)a0;
- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)enableListeningForUpdatesForReason:(id)a0;
- (void)noteActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)disableListeningForUpdatesForReason:(id)a0;
- (void)_handleInitialSpringBoardLaunch;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)bestAppSuggestionChanged:(id)a0;

@end
