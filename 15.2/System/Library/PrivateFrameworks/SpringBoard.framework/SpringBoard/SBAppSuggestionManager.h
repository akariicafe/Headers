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

- (void)_evaluateSuggestionUpdates:(id)a0;
- (void)_handleInitialSpringBoardLaunch;
- (void)_setContinuitySuggestionUpdatesEnabled:(BOOL)a0 expertCenterSuggestionUpdatesEnabled:(BOOL)a1;
- (void)performWithCurrentSuggestedAppAndApplication:(id /* block */)a0;
- (void)_destroySuggestionSources;
- (void)_handleAppUninstall:(id)a0;
- (void)disableListeningForUpdatesForReason:(id)a0;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)noteNotActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)bestAppSuggestionChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)expertCenterSuggestionChanged:(id)a0;
- (void)_createSuggestionSources;
- (unsigned long long)_supportedExpertCenterCategories;
- (void)clientDidResetForUserAttention:(id)a0;
- (void)noteActivatingForAppSuggestion:(id)a0 fromSource:(long long)a1;
- (void)_screenDidUndim:(id)a0;
- (id)currentSuggestedApp;
- (void)startFetchingPayloadForAppSuggestion:(id)a0;
- (void)_screenDidDim:(id)a0;
- (void)enableListeningForUpdatesForReason:(id)a0;
- (void)dealloc;
- (void)_listenForNotifications;
- (void)_stopListeningForNotifications;

@end
