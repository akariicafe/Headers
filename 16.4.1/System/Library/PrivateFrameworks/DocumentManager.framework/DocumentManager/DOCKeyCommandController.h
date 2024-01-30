@interface DOCKeyCommandController : NSObject

+ (id)cancellingKeyCommandsWithAction:(SEL)a0;
+ (id)dismissingKeyCommandsWithAction:(SEL)a0;

- (id)_menuDefinition;
- (id)_menuOrder;
- (id)_menuTitleForCustomMenuWithIdentifier:(id)a0;
- (id)_unwantedMenuIdentifiers;
- (id)allKeyCommands;
- (id)allKeyCommandsWithAction:(SEL)a0;
- (void)buildWithBuilder:(id)a0;

@end
