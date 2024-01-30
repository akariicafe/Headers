@class NSString, NSMutableDictionary, NSSet, NSArray, AXSSKeyboardCommandMap;

@interface FKAAvailableCommands : NSObject

@property (class, readonly, nonatomic) FKAAvailableCommands *sharedInstance;

@property (retain, nonatomic) NSString *siriShortcutsDidChangeObserverToken;
@property (retain, nonatomic) id forceTouchEnabledDidChangeObserverToken;
@property (retain, nonatomic) NSMutableDictionary *tokensToUpdateBlocks;
@property (readonly, nonatomic) NSSet *commands;
@property (readonly, nonatomic) NSArray *categories;
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_siriShortcutCommands;
- (id)registerUpdateBlock:(id /* block */)a0;
- (void)unregisterUpdateBlockWithToken:(id)a0;

@end
