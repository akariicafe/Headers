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

- (id)tabInsertionHintForSpawnedTab;
- (BOOL)_newTabPositionPreferenceAppliesToSwawnedTabs;
- (id)tabInsertionHintForNewBlankTabInCurrentContext;
- (id)_nextNonClosedTabAdjacentToIndex:(unsigned long long)a0 inAscendingOrder:(BOOL)a1;
- (id)tabInsertionHintForNewBlankTab;
- (id)_insertionHintWithTabToInsertAfter:(id)a0 relation:(unsigned long long)a1;
- (id)simplifiedIdentifierForDisplayInTabTitle:(id)a0;
- (id)tabInsertionHintForDuplicateOfTab:(id)a0;
- (unsigned long long)_indexOfLastRelatedTab;
- (unsigned long long)_userPreferredNewSpawnedTabPosition;
- (void).cxx_destruct;
- (id)tabToInsertNewTabAfterForPosition:(unsigned long long)a0;
- (BOOL)_tab:(id)a0 isRelatedOrEqualToTab:(id)a1;
- (id)init;
- (id)tabToInsertSpawnedTabAfter;
- (unsigned long long)_indexOfTabToInsertNewTabAfter;
- (unsigned long long)_relationConsideringUserPreferenceForRelation:(unsigned long long)a0 isBlankTab:(BOOL)a1;
- (id)_insertionHintWithIndexOfTabToInsertAfter:(unsigned long long)a0 relation:(unsigned long long)a1;
- (id)tabInsertionHintForPosition:(unsigned long long)a0;
- (id)_tabInsertionHintForNewBlankTabWithRecommendedPosition:(unsigned long long)a0;
- (BOOL)tab:(id)a0 isInSameSetAsTab:(id)a1;
- (id)_tabInsertionHintForNewTabAfterTab:(id)a0 relation:(unsigned long long)a1;
- (id)_tabInsertionHintForPosition:(unsigned long long)a0 isBlankTab:(BOOL)a1;
- (unsigned long long)_userPreferredNewBlankTabPositionInCurrentContext:(BOOL)a0;
- (id)tabToInsertNewBlankTabAfter;

@end
