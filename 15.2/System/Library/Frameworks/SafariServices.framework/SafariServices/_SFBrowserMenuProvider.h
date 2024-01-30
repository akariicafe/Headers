@class NSDictionary, NSSet;

@interface _SFBrowserMenuProvider : NSObject {
    NSDictionary *_personaToMenusMap[4];
    NSSet *_personaToCommandSetMap[4];
    unsigned long long _persona;
}

@property (class, readonly, nonatomic) _SFBrowserMenuProvider *sharedProvider;

- (void).cxx_destruct;
- (id)init;
- (void)_enabledExtensionsDidChange;
- (void)_setMenusIfNecessaryForPersona:(unsigned long long)a0;
- (void)_setMenusForPersona:(unsigned long long)a0 withBuilder:(id)a1;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4 alternates:(id)a5;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 webInterceptable:(BOOL)a3 property:(unsigned long long)a4;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4;
- (id)_placeholderCommandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3;
- (id)_commandWithPriorityOverTextEditingForCommand:(id)a0;
- (id)_switchToTabCommands;
- (id)_extensionsMenu;
- (id)_commandWithAction:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4 property:(unsigned long long)a5 alternates:(id)a6;
- (void)setMenusForSafariWithBuilder:(id)a0;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)a0;
- (void)rebuildMenuIfNeededForPersona:(unsigned long long)a0;
- (BOOL)commandConflictsWithTextEditing:(id)a0;

@end
