@class NSDictionary, NSSet;

@interface SFBrowserMenuProvider : NSObject {
    NSDictionary *_personaToMenusMap[4];
    NSSet *_personaToCommandSetMap[4];
    long long _persona;
}

@property (class, readonly, nonatomic) SFBrowserMenuProvider *sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (id)_extensionsMenu;
- (void)_setMenusIfNecessaryForPersona:(long long)a0;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4 alternates:(id)a5;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4 property:(unsigned long long)a5 alternates:(id)a6;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 webInterceptable:(BOOL)a3 property:(unsigned long long)a4;
- (id)_commandWithPriorityOverTextEditingForCommand:(id)a0;
- (void)_enabledExtensionsDidChange;
- (id)_newDocumentCommands;
- (id)_placeholderCommandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3;
- (void)_setMenusForPersona:(long long)a0 withBuilder:(id)a1;
- (id)_switchToTabCommands;
- (BOOL)commandConflictsWithTextEditing:(id)a0;
- (void)rebuildMenuIfNeededForPersona:(long long)a0;
- (void)setMenusForSafariWithBuilder:(id)a0;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)a0;

@end
