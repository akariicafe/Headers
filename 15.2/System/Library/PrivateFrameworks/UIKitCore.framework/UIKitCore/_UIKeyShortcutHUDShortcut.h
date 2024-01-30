@class NSString, NSArray, NSMutableDictionary, UIKeyCommand, UICommandAlternate;

@interface _UIKeyShortcutHUDShortcut : _UIKeyShortcutHUDMenuElement

@property (readonly, nonatomic) UIKeyCommand *uiKeyCommand;
@property (retain, nonatomic) UIKeyCommand *discoverabilityUIKeyCommand;
@property (readonly, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) NSString *hudTitle;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) unsigned long long attributes;
@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *baseShortcutForAlternate;
@property (weak, nonatomic) UICommandAlternate *alternateForBaseShortcut;
@property (readonly, nonatomic) NSArray *shortcutAlternates;
@property (readonly, nonatomic) NSMutableDictionary *alternatesMap;
@property (weak, nonatomic) id originalTarget;

+ (id)shortcutWithUIKeyCommand:(id)a0;

- (void)_acceptMenuVisit:(id /* block */)a0 shortcutVisit:(id /* block */)a1;
- (void).cxx_destruct;
- (id)shortcutToDisplayForModifierFlags:(long long)a0;

@end
