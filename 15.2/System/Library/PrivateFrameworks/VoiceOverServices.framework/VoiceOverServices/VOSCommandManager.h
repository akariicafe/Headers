@class NSString, NSObject, VOSCommandProfile;
@protocol OS_dispatch_queue;

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_siriShortCutToken;
}

@property (nonatomic) BOOL activeProfileIsUserProfile;
@property (nonatomic) BOOL loadShortcuts;
@property (readonly, nonatomic) VOSCommandProfile *activeProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (void)reloadWithSystemProfile;
- (void)_commonUserProfileInit;
- (id)initPreferringUserProfile;
- (void)reloadPreferringUserProfile;
- (BOOL)_validateUserProfileDiscrepancies:(id)a0;
- (void)saveAsUserProfile;
- (void)_loadSystemProfile;
- (id)systemProfile;
- (unsigned long long)availabilityForGesture:(id)a0 withResolver:(id)a1;
- (id)commandForTouchGesture:(id)a0 withResolver:(id)a1;
- (id)addGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)removeGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)addKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)removeKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)validateCanAddGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)validateCanRemoveGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)validateCanAddKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)validateCanRemoveKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)commandForKeyChord:(id)a0 withResolver:(id)a1;
- (id)allCommandsWithResolver:(id)a0;
- (id)allSiriShortcutCommandsWithResolver:(id)a0;
- (id)allShortcutBindingsWithResolver:(id)a0;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)a0;
- (id)gestureBindingsForCommand:(id)a0 withResolver:(id)a1;
- (id)shortcutBindingsForCommand:(id)a0 withResolver:(id)a1;
- (BOOL)commandHasAnyBindings:(id)a0 withResolver:(id)a1;
- (unsigned long long)availabilityForShortcut:(id)a0 withResolver:(id)a1;
- (unsigned long long)availabilityForCommand:(id)a0 withResolver:(id)a1;
- (BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)a0 withResolver:(id)a1;
- (id)availableSiriShortcuts:(id)a0;
- (id)initWithSystemProfile;
- (id)initPreferringUserProfileWithoutShortcuts;
- (void)restoreDefaultProfile;
- (void)batchUpdateActiveProfile:(id /* block */)a0 saveIfSuccessful:(BOOL)a1 completion:(id /* block */)a2;

@end
