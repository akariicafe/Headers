@interface DOCKeyCommandRegistry : NSObject

@property (getter=areSingleCharKeyCommandsEnabled) BOOL singleCharKeyCommandsEnabled;

+ (id)sharedInstance;
+ (id)_defaultIdentifiersAndKeyCommands;
+ (id)_reversedDefaultIdentifiersAndKeyCommands;
+ (id)_inputsOfAlwaysEnabledSingleCharKeyCommands;

- (id)init;
- (void)keyCommandWasPerformed:(id)a0;
- (id)dismissingKeyCommands;
- (id)defaultKeyCommandsByExcludingKeyCommandsWithIdentifiers:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1 defaultBehavior:(BOOL)a2;
- (BOOL)_shouldOfferKeyCommand:(id)a0;
- (id)dismissingKeyCommandsWithAction:(SEL)a0;
- (void)_postNotificationForKeyCommandIdentifier:(id)a0 modifierFlags:(long long)a1;
- (void)_registerForKeyCommandWithIdentifier:(id)a0 viewController:(id)a1 withHandler:(id /* block */)a2;
- (void)registerForKeyCommandWithIdentifiers:(id)a0 viewController:(id)a1 handler:(id /* block */)a2;

@end
