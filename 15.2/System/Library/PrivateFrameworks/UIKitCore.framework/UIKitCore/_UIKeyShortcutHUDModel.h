@class NSMutableDictionary, _UIKeyShortcutHUDMenu, NSMutableSet, NSMutableArray;

@interface _UIKeyShortcutHUDModel : NSObject {
    NSMutableArray *_eligibleActiveShortcutAlternates;
    NSMutableSet *_lowPriorityResponderShortcuts;
    struct __GSKeyboard { } *_gsKeyboard;
}

@property (retain, nonatomic) NSMutableArray *activeKeyCommands;
@property (retain, nonatomic) NSMutableDictionary *keyCommandModelMap;
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *menu;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)modelWithConfiguration:(id)a0;

- (void)_addShortcutIfOriginalForBaseKeyCommand:(id)a0 usingAlternate:(id)a1 withBaseShortcut:(id)a2;
- (void)_addKeyCommandsForHUDFromMenu:(id)a0 validation:(id)a1 configuration:(id)a2 currentShortcuts:(id)a3;
- (id)_menuByOmittingElementsInMenu:(id)a0;
- (id)_addShortcutsIfOriginalForKeyCommandAndAlternates:(id)a0;
- (id)_addShortcutIfOriginalForKeyCommand:(id)a0;
- (BOOL)_validateShortcut:(id)a0 validation:(id)a1 configuration:(id)a2;
- (id)_fullMenu;
- (void).cxx_destruct;
- (id)activeKeyCommandsExcludingHUDCommands:(id)a0;
- (id)modelShortcutForKeyCommand:(id)a0;
- (id)menuWithAlternatesForModifierFlags:(long long)a0;
- (id)searchMenuWithSearchText:(id)a0 maxSearchResultEntries:(unsigned long long)a1;
- (void)_buildMenuWithConfiguration:(id)a0;
- (id)_hudMenuFromFullMenu:(id)a0 withConfiguration:(id)a1;
- (id)_responderBasedShortcutsStartingAtResponder:(id)a0;

@end
