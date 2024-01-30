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

- (void)_loadSystemProfile;
- (id)removeKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)addGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (void)_commonInit;
- (id)initWithSystemProfile;
- (id)gestureBindingsForCommand:(id)a0 withResolver:(id)a1;
- (id)shortcutBindingsForCommand:(id)a0 withResolver:(id)a1;
- (id)allCommandsWithResolver:(id)a0;
- (id)initPreferringUserProfile;
- (id)validateCanRemoveKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (BOOL)_validateUserProfileDiscrepancies:(id)a0;
- (unsigned long long)availabilityForShortcut:(id)a0 withResolver:(id)a1;
- (id)validateCanAddKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)availableSiriShortcuts:(id)a0;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)a0;
- (id)commandForTouchGesture:(id)a0 withResolver:(id)a1;
- (id)addKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)removeGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (void)dealloc;
- (id)commandForKeyChord:(id)a0 withResolver:(id)a1;
- (void)saveAsUserProfile;
- (void)reloadPreferringUserProfile;
- (id)validateCanAddGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (void)restoreDefaultProfile;
- (unsigned long long)availabilityForGesture:(id)a0 withResolver:(id)a1;
- (BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)a0 withResolver:(id)a1;
- (id)init;
- (id)allShortcutBindingsWithResolver:(id)a0;
- (id)validateCanRemoveGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)systemProfile;
- (void)batchUpdateActiveProfile:(id /* block */)a0 saveIfSuccessful:(BOOL)a1 completion:(id /* block */)a2;
- (id)allSiriShortcutCommandsWithResolver:(id)a0;
- (id)initPreferringUserProfileWithoutShortcuts;
- (void).cxx_destruct;
- (unsigned long long)availabilityForCommand:(id)a0 withResolver:(id)a1;
- (void)_commonUserProfileInit;
- (BOOL)commandHasAnyBindings:(id)a0 withResolver:(id)a1;
- (void)reloadWithSystemProfile;

@end
