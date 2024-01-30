@class NSMutableDictionary;
@protocol WBSTabOrderProvider, WBSOrderedTab;

@interface WBSTabOrderManager : NSObject {
    NSMutableDictionary *_simplifiedIdentifierMap;
    long long _nextSimplifiedIdentifier;
}

@property (weak, nonatomic) id<WBSTabOrderProvider> tabOrderProvider;
@property (readonly, nonatomic) id<WBSOrderedTab> tabToSelectBeforeClosingSelectedTab;

- (id)init;
- (id)_insertionHintWithTabToInsertAfter:(id)a0 relation:(unsigned long long)a1;
- (id)tabInsertionHintForDuplicateOfTab:(id)a0;
- (void).cxx_destruct;
- (id)_tabInsertionHintForNewTabAfterTab:(id)a0 relation:(unsigned long long)a1;
- (unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)a0 isBlankTab:(BOOL)a1;
- (id)tabInsertionHintForNewBlankTab;
- (unsigned long long)_indexOfLastRelatedTab;
- (id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)a0 inAscendingOrder:(BOOL)a1;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)a0;
- (id)tabInsertionHintForSpawnedTab;
- (unsigned long long)_userPreferredNewSpawnedTabPosition;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)a0;
- (id)tabInsertionHintForPosition:(unsigned long long)a0;
- (id)tabToInsertSpawnedTabAfter;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (BOOL)tab:(id)a0 isInSameSetAsTab:(id)a1;
- (id)tabToInsertNewBlankTabAfter;
- (BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)a0;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)a0 relation:(unsigned long long)a1;
- (BOOL)_tab:(id)a0 isRelatedOrEqualToTab:(id)a1;
- (id)_tabInsertionHintForPosition:(unsigned long long)a0 isBlankTab:(BOOL)a1;
- (unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)a0;
- (unsigned long long)_indexOfTabToInsertNewTabAfter;

@end
