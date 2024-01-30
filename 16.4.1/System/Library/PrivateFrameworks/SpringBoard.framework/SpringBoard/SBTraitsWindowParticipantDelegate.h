@class NSString, NSMapTable, NSHashTable, NSMutableDictionary, NSMutableArray;

@interface SBTraitsWindowParticipantDelegate : NSObject <SBFTraitsParticipantDelegate> {
    NSHashTable *_visibleWindows;
    NSMapTable *_participantOwningWindowMapTable;
    NSMutableArray *_tempOwningWindowHidden;
    NSMutableArray *_tempOwningWindowVisible;
    NSMutableDictionary *_tempLastPreferredZOrder;
    NSMutableDictionary *_tempLastSupportedOrientations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_activeOrientationDeterminingParticipantRoles;

- (void)setParticipant:(id)a0 ownedByWindow:(id)a1;
- (id)_autorotationPreventionReasons:(id)a0;
- (void)windowDidUpdateSupportedOrientations:(unsigned long long)a0 ownedParticipant:(id)a1;
- (unsigned int)_TEMP_89890840_participantAssociatedContextID:(id)a0;
- (id)_validationFailureReasonForWindow:(id)a0;
- (void)windowWillBecomeVisible:(id)a0 ownedParticipant:(id)a1;
- (void)windowDidUpdatePreferredWindowLevel:(double)a0 ownedParticipant:(id)a1;
- (void)participantWillInvalidate:(id)a0;
- (unsigned long long)_validatedSupportedInterfaceOrientations:(unsigned long long)a0 forWindow:(id)a1;
- (BOOL)_isWindowContentVisible:(id)a0;
- (id)participantAssociatedSceneIdentityTokens:(id)a0;
- (id)init;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)windowWillBecomeHidden:(id)a0 ownedParticipant:(id)a1;
- (id)participantAssociatedWindows:(id)a0;
- (void).cxx_destruct;
- (void)validateSettingsForParticipant:(id)a0 validator:(id)a1;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;

@end
