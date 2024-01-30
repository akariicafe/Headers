@class NSString, NSMapTable, NSMutableDictionary;

@interface SBDefaultTraitsParticipantDelegate : NSObject <SBFTraitsParticipantDelegate> {
    NSMapTable *_participantOwningWindowMapTable;
    NSMutableDictionary *_tempLastPreferredZOrder;
    NSMutableDictionary *_tempLastSupportedOrientations;
    NSMutableDictionary *_tempOwningWindowVisible;
    NSMutableDictionary *_tempOwningWindowHidden;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_activeOrientationDeterminingParticipantRoles;

- (void)participantWillInvalidate:(id)a0;
- (BOOL)_isWindowContentVisible:(id)a0;
- (void)windowDidUpdateSupportedOrientations:(unsigned long long)a0 ownedParticipant:(id)a1;
- (id)participantAssociatedWindows:(id)a0;
- (void)setParticipant:(id)a0 ownedByWindow:(id)a1;
- (void)validateSettingsForParticipant:(id)a0 validator:(id)a1;
- (void)windowWillBecomeVisible:(id)a0 ownedParticipant:(id)a1;
- (void)windowWillBecomeHidden:(id)a0 ownedParticipant:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)windowDidUpdatePreferredWindowLevel:(double)a0 ownedParticipant:(id)a1;
- (unsigned long long)_validatedSupportedInterfaceOrientations:(unsigned long long)a0 forWindow:(id)a1;
- (id)_validationFailureReasonForWindow:(id)a0 shouldAutorotate:(BOOL)a1;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (id)_autorotationPreventionReasons:(id)a0;
- (void)updatePreferenceForParticipant:(id)a0 updater:(id)a1;

@end
