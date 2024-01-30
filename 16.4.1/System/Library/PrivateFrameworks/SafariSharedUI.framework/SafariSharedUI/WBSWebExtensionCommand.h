@class NSString, NSDictionary, NSArray, UIKeyCommand;

@interface WBSWebExtensionCommand : NSObject {
    NSDictionary *_properties;
    NSString *_shortcutKey;
    NSArray *_modifiers;
    UIKeyCommand *_keyCommand;
}

@property (readonly, copy, nonatomic) NSString *commandName;
@property (readonly, copy, nonatomic) NSString *commandDescription;
@property (readonly, copy, nonatomic) NSString *shortcut;
@property (readonly, copy, nonatomic) NSString *extensionComposedIdentifier;
@property (readonly, nonatomic) UIKeyCommand *keyCommand;

- (id)description;
- (void).cxx_destruct;
- (void)_parseShortcut:(id)a0;
- (id)initWithProperties:(id)a0 extensionComposedIdentifier:(id)a1 outErrorMessage:(id *)a2;

@end
