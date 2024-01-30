@class NSString, WBSCyclerItemListRepresentation;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerOperationContext : NSObject

@property (retain, nonatomic) id<WBSCyclerTestTarget> testTarget;
@property (retain, nonatomic) WBSCyclerItemListRepresentation *topLevelItem;
@property (copy, nonatomic) NSString *titlePrefix;

- (void).cxx_destruct;
- (id)randomItemTitle;
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)a0;
- (id)_copyItem:(id)a0 filteringWithIdentifierWhitelist:(id)a1;
- (BOOL)_isItemPrefixed:(id)a0;
- (BOOL)_isItemValid:(id)a0;
- (id)filterOutItemsWithoutTitlePrefixInList:(id)a0;
- (id)randomDescendantOfList:(id)a0 enforcingTitlePrefixValidity:(BOOL)a1 passingTest:(id /* block */)a2;
- (id)randomValidStrictDescendantOfList:(id)a0;
- (id)randomValidStrictDescendantOfTopLevelItem;
- (id)randomValidStrictListDescendantOfList:(id)a0;
- (id)randomValidStrictListDescendantOfTopLevelItem;

@end
