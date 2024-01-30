@class NSMutableSet;
@protocol VOSCommandProfileDelegate;

@interface VOSCommandProfile : NSObject <NSSecureCoding> {
    NSMutableSet *_modes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<VOSCommandProfileDelegate> delegate;

+ (id)_parseProfileProperties:(id)a0 overlayProperties:(id)a1;
+ (void)_addGesturesToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (void)_addKeyboardShortcutsToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (void)_addQuickNavShortcutsToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (void)_addSecondaryCommandsToCommand:(id)a0 fromCommandProperties:(id)a1 overlayProperties:(id)a2;
+ (BOOL)_overlay:(id)a0 shouldIncludeItem:(id)a1;
+ (id)_profileKeyChordsFromDictionaryValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
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
- (id)initWithProfileProperties:(id)a0 overlayProperties:(id)a1;
- (id)_initWithModes:(id)a0;
- (id)_profileModeForResolver:(id)a0;
- (id)_resolvedSecondaryCommandForProfileCommand:(id)a0 resolver:(id)a1;
- (id)_profileCommandForCommand:(id)a0 inMode:(id)a1;
- (id)_profileModeForScreenreaderMode:(id)a0;

@end
