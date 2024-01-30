@interface _SFBrowserKeyCommands : NSObject

+ (id)unlocalizedKeyCommandWithSelector:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 webInterceptable:(BOOL)a3;
+ (id)localizedKeyCommandWithSelector:(SEL)a0 discoverabilityTitle:(id)a1 bundle:(id)a2 table:(id)a3 webInterceptable:(BOOL)a4;
+ (id)_keyForSelectorString:(id)a0 bundle:(id)a1 table:(id)a2;
+ (id)browserKeyCommandsForPersona:(unsigned long long)a0 shouldAddEditingCommands:(BOOL)a1;
+ (BOOL)_boolForSelectorString:(id)a0 modifierString:(id)a1 bundle:(id)a2 table:(id)a3;
+ (void)_setUpKeyCommandsIfNecessaryForPersona:(unsigned long long)a0;
+ (id)_localizedKeyCommandWithSelector:(SEL)a0 discoverabilityTitle:(id)a1 webInterceptable:(BOOL)a2;
+ (id)unlocalizedKeyCommandWithSelector:(SEL)a0 input:(id)a1 modifierFlags:(long long)a2 discoverabilityTitle:(id)a3 webInterceptable:(BOOL)a4;
+ (long long)_modifierFlagsForSelectorString:(id)a0 bundle:(id)a1 table:(id)a2;
+ (id)_placeholderKeyCommandForCommand:(id)a0;

@end
