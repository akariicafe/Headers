@class NSCountedSet, CNContact, NSArray, NSMutableSet, NSDate;

@interface CNQuickActionsUsageManager : NSObject

@property (retain, nonatomic) NSCountedSet *actionsUsageSet;
@property (retain, nonatomic) NSMutableSet *enabledActionIdentifiers;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *cachedInteractions;
@property (retain, nonatomic) NSDate *cachedInteractionsDate;
@property (nonatomic) BOOL sortsWithDuet;

+ (id)managerForContact:(id)a0;
+ (BOOL)sortUsingCoreDuetAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)_updateDuetInteractionsIfNeeded;
- (double)scoreForAction:(id)a0;
- (void)actionPerformed:(id)a0;
- (void)cacheEnabledStateForAction:(id)a0;
- (id)sortedActions:(id)a0;
- (void)updateCachedEnabledStateForAction:(id)a0;

@end
