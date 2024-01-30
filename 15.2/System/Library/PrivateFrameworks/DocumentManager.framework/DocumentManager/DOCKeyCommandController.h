@interface DOCKeyCommandController : NSObject

+ (id)cancellingKeyCommandsWithAction:(SEL)a0;
+ (id)dismissingKeyCommandsWithAction:(SEL)a0;

- (id)allKeyCommands;
- (id)allKeyCommandsWithAction:(SEL)a0;
- (id)_menuDefinition;
- (id)_menuOrder;
- (id)_unwantedMenuIdentifiers;
- (id)_menuTitleForCustomMenuWithIdentifier:(id)a0;
- (void)buildWithBuilder:(id)a0;

@end
