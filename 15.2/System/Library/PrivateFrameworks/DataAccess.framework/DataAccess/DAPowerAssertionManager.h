@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject

@property (retain, nonatomic) NSCountedSet *contexts;
@property (retain, nonatomic) NSMapTable *groupIdentifierToContexts;
@property (retain, nonatomic) NSMapTable *contextToGroupIdentifier;
@property (retain, nonatomic) NSMutableSet *heldAsideGroupIdentifiers;
@property (retain, nonatomic) NSCountedSet *heldAsideContexts;
@property (retain, nonatomic) NSMapTable *contextToPowerAssertionRef;

+ (id)sharedPowerAssertionManager;
+ (void)vendDaemons:(Class)a0;

- (id)stateString;
- (void).cxx_destruct;
- (id)init;
- (void)releasePowerAssertion:(id)a0;
- (void)dropPowerAssertionsForGroupIdentifier:(id)a0;
- (void)reattainPowerAssertionsForGroupIdentifier:(id)a0;
- (void)retainPowerAssertion:(id)a0 withGroupIdentifier:(id)a1;
- (BOOL)_retainAssertionForContext:(id)a0;
- (BOOL)_releaseAssertionForContext:(id)a0;
- (unsigned long long)powerAssertionRetainCount:(id)a0;

@end
