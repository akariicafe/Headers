@class NSString, NSMutableDictionary;
@protocol WBSTabOrderProvider, WBSOrderedTab, WBSTabOrderPreferenceProviding;

@interface WBSTabOrderManager : NSObject <WBSTabOrderPreferenceProviding> {
    NSMutableDictionary *_simplifiedIdentifierMap;
    long long _nextSimplifiedIdentifier;
}

@property (weak) id<WBSTabOrderPreferenceProviding> preferenceProvider;
@property (weak, nonatomic) id<WBSTabOrderProvider> tabOrderProvider;
@property (readonly, nonatomic) id<WBSOrderedTab> tabToSelectBeforeClosingSelectedTab;
@property (readonly, nonatomic) unsigned long long newTabPosition;
@property (readonly, nonatomic) BOOL newTabPositionAppliesToSpawnedTabs;
@property (readonly, nonatomic) BOOL newBlankTabPositionAppliesToAllBlankTabs;
@property (readonly, nonatomic) BOOL suppressRelatingNewBlankTabs;
@property (readonly, nonatomic) double minimumDelayForRelatingNewBlankTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_indexOfLastRelatedTab;
- (unsigned long long)_indexOfTabToInsertNewTabAfter;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)a0 relation:(unsigned long long)a1;
- (id)_insertionHintWithTabToInsertAfter:(id)a0 relation:(unsigned long long)a1;
- (BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)a0 inAscendingOrder:(BOOL)a1;
- (unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)a0 isBlankTab:(BOOL)a1;
- (BOOL)_tab:(id)a0 isRelatedOrEqualToTab:(id)a1;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)a0;
- (id)_tabInsertionHintForNewTabAfterTab:(id)a0 relation:(unsigned long long)a1;
- (id)_tabInsertionHintForPosition:(unsigned long long)a0 isBlankTab:(BOOL)a1;
- (unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)a0;
- (unsigned long long)_userPreferredNewSpawnedTabPosition;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)a0;
- (BOOL)tab:(id)a0 isInSameSetAsTab:(id)a1;
- (id)tabInsertionHintForDuplicateOfTab:(id)a0;
- (id)tabInsertionHintForNewBlankTab;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (id)tabInsertionHintForNewTabOfType:(long long)a0;
- (id)tabInsertionHintForPosition:(unsigned long long)a0;
- (id)tabInsertionHintForSpawnedTab;
- (id)tabToInsertNewBlankTabAfter;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)a0;
- (id)tabToInsertSpawnedTabAfter;

@end
