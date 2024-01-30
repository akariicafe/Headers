@class NSString, NSMutableDictionary, NSSet, NSBundle, NSArray;

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSArray *_sixDotCommands;
    NSArray *_eightDotCommands;
}

@property (class, readonly) SCROMobileBrailleDisplayInputManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_bundle;
- (id)commandForBrailleKey:(id)a0;
- (void)configureWithDriverConfiguration:(id)a0;
- (id)_commandsFromBrailleInputMode:(int)a0;
- (id)userDefaultsForModelIdentifier:(id)a0;
- (id)_commandForHidUsage:(id)a0;
- (void)setCommand:(id)a0 forInputIdentifier:(id)a1 forDisplayWithToken:(int)a2;
- (void)setUserDefaults:(id)a0 forModelIdentifier:(id)a1;
- (id)_sixDotCommands;
- (id)_eightDotCommands;
- (id)inputIdentifierAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (id)buttonNamesForInputIdentifier:(id)a0 forDisplayWithToken:(int)a1;
- (struct __CFString { } *)defaultsKeyForModelIdentifier:(id)a0;
- (id)commandDictionaryForDisplayWithToken:(int)a0;
- (id)driverIdentifierForDisplayWithToken:(int)a0;
- (id)modelIdentifierForDisplayWithToken:(int)a0;
- (void)setCommand:(id)a0 forBrailleKey:(id)a1;
- (void)removeAllUserAssignedCommandsForDisplayWithToken:(int)a0;
- (unsigned long long)userAssignedCommandCountForDisplayWithToken:(int)a0;
- (unsigned long long)countForDisplayWithToken:(int)a0;
- (id)commandAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;
- (id)buttonNamesAtIndex:(unsigned long long)a0 forDisplayWithToken:(int)a1;

@end
