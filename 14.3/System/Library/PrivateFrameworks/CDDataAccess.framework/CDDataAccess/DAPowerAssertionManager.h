@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject

@property (retain, nonatomic) NSCountedSet *contexts;
@property (retain, nonatomic) NSMapTable *groupIdentifierToContexts;
@property (retain, nonatomic) NSMapTable *contextToGroupIdentifier;
@property (retain, nonatomic) NSMutableSet *heldAsideGroupIdentifiers;
@property (retain, nonatomic) NSCountedSet *heldAsideContexts;
@property (retain, nonatomic) NSMapTable *contextToPowerAssertionRef;

+ (void)vendDaemons:(Class)a0;
+ (id)sharedPowerAssertionManager;

- (id)stateString;
- (id)init;
- (void).cxx_destruct;
- (void)retainPowerAssertion:(id)a0 withGroupIdentifier:(id)a1;
- (void)releasePowerAssertion:(id)a0;
- (BOOL)_retainAssertionForContext:(id)a0;
- (BOOL)_releaseAssertionForContext:(id)a0;
- (unsigned long long)powerAssertionRetainCount:(id)a0;
- (void)dropPowerAssertionsForGroupIdentifier:(id)a0;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)a0;

@end
