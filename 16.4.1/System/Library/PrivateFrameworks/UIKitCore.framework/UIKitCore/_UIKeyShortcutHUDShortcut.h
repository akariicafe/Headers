@class UICommandAlternate, NSString, NSMutableDictionary, NSArray, UIKeyCommand, NSMutableArray;

@interface _UIKeyShortcutHUDShortcut : _UIKeyShortcutHUDMenuElement <NSSecureCoding> {
    NSString *_overrideTitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIKeyCommand *uiKeyCommand;
@property (retain, nonatomic) UIKeyCommand *discoverabilityUIKeyCommand;
@property (readonly, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) NSString *hudTitle;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, nonatomic) NSMutableArray *displayableAlternates;
@property (readonly, nonatomic) NSMutableDictionary *alternatesMap;
@property (readonly, nonatomic) NSArray *shortcutAlternates;
@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *baseShortcutForAlternate;
@property (weak, nonatomic) UICommandAlternate *alternateForBaseShortcut;
@property (weak, nonatomic) id originalTarget;
@property (readonly, nonatomic) BOOL isPasteShortcut;

+ (id)shortcutWithUIKeyCommand:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)a0 shortcutVisit:(id /* block */)a1;
- (BOOL)_isEquivalentToPasteAndMatchStyleShortcut;
- (BOOL)_isEquivalentToPasteShortcut;
- (void)_updateOverrideTitle;
- (id)shortcutToDisplayForModifierFlags:(long long)a0;

@end
