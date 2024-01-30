@class NSString, NSMutableDictionary, AFAnalyticsTurnBasedInstrumentationContext, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SRUIFInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider> {
    NSString *_lastDismissedIdentifier;
    NSObject<OS_dispatch_queue> *_instrumentationManagerQueue;
    NSMutableDictionary *_aceViewDialogIdentifiers;
    NSMutableDictionary *_aceViewDialogIdentifiersForMessageConstruction;
    NSMutableDictionary *_cardInfo;
    NSUserDefaults *_userDefaults;
    BOOL _shouldInstrument;
}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;
@property int currentSiriUIState;
@property (copy, nonatomic) NSString *clientGeneratedDialogIdentifier;
@property (nonatomic) BOOL hasNotYetEmittedLaunchContextEnd;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_convertVirtualAudioSubTypeToString:(unsigned int)a0;
- (void)emitInstrumentation:(id)a0;
- (id)associatedDialogIdentifiersForAceObjectIdentifier:(id)a0;
- (void)emitPunchOutEventWithURL:(id)a0 appID:(id)a1 punchoutOrigin:(int)a2;
- (void)emitUserViewRegionInteractionEventWithViewRegion:(int)a0 userViewInteraction:(int)a1;
- (void)storeCurrentInstrumentationTurnContext:(id)a0;
- (void)emitUIStateTransitionForSiriDismissalWithReason:(int)a0;
- (id)latestStoredTurn;
- (void)emitCasinoRelationshipEventWithViewIDFrom:(id)a0 ViewIDTo:(id)a1 casinoFromType:(int)a2;
- (void)emitUUFRCasinoCardSelectedEventWithCardSectionID:(id)a0 ordinalCardSectionPosition:(long long)a1 snippetAceId:(id)a2;
- (void)emitUUFRPresentedEventWith:(id)a0 snippetClass:(id)a1 dialogIdentifier:(id)a2 dialogPhase:(id)a3;
- (void)storeCardID:(id)a0 forSnippetAceID:(id)a1;
- (void)emitPunchOutEventWithURL:(id)a0 appID:(id)a1;
- (void)_barrierWithCompletion:(id /* block */)a0;
- (id)_displayedDialogForAssistantUtteranceView:(id)a0;
- (void)_emitInstrumentation:(id)a0 forTurn:(id)a1 atTime:(unsigned long long)a2;
- (BOOL)_hasDismissedForTurnContext:(id)a0;
- (id)_pnrErrorMessageWithError:(id)a0;
- (void)_populateDefaultHardwareInformationWithRouteInfo:(id)a0 forTTSEvent:(id)a1;
- (void)_populateWirelessHardwareInformationWithRouteInfo:(id)a0 forTTSEvent:(id)a1;
- (void)_prepareForTesting;
- (id)_responseContextWithPresentationType:(int)a0 dialogPhase:(id)a1 mode:(int)a2;
- (id)_routeInfoForOutputRoute;
- (void)_willInstrument:(id)a0 forTurn:(id)a1;
- (void)boostQueuedMessagesAndPerformOnQueueCompletion:(id /* block */)a0 timeout:(double)a1;
- (id)cardIDforSnippetAceID:(id)a0;
- (void)emitFinalSpeechTranscriptionEventForAceObjectWithIdentifier:(id)a0;
- (void)emitInstrumentation:(id)a0 atTime:(unsigned long long)a1;
- (void)emitPartialSpeechTranscriptionEventForAceObjectWithIdentifier:(id)a0;
- (void)emitRequestFailedWithError:(id)a0;
- (void)emitRevealSpeechTranscriptionEventForAceObjectWithIdentifier:(id)a0;
- (void)emitTextToSpeechBeginEvent:(id)a0;
- (void)emitTextToSpeechEndEvent:(id)a0;
- (void)emitTextToSpeechRequestReceivedEventFor:(id)a0 atTime:(unsigned long long)a1;
- (void)emitUIStateTransitionEventWithFromState:(int)a0 toState:(int)a1 withPresentationType:(int)a2 machAbsoluteTransitionTime:(double)a3;
- (void)emitUUFRShownForAceObject:(id)a0 presentationType:(int)a1 dialogPhase:(id)a2;
- (void)emitUUFRShownForAceObject:(id)a0 presentationType:(int)a1 dialogPhase:(id)a2 mode:(int)a3 viewRegion:(int)a4;
- (void)emitUUFRSpokenForAceObject:(id)a0 presentationType:(int)a1 dialogPhase:(id)a2 mode:(int)a3;
- (void)emitUUFRSpokenForAceObject:(id)a0 presentationType:(int)a1 dialogPhase:(id)a2 mode:(int)a3 speakableText:(id)a4;
- (void)hostDidBecomeActive;
- (void)hostWillResignActive;
- (void)setDialogIdentifiers:(id)a0 forAceViewSpeakableTextWithIdentifier:(id)a1;
- (void)storeClientGeneratedDUC:(id)a0;

@end
