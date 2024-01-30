@class NSString, NSArray, NSHashTable, AXElement;
@protocol AXElementGroupGenerator;

@interface AXElementGroup : NSArray <AXGroupable> {
    NSArray *_elementStore;
}

@property (weak, nonatomic) id<AXElementGroupGenerator> generator;
@property (retain, nonatomic) NSHashTable *groupObservers;
@property (nonatomic) unsigned long long groupTraits;
@property (nonatomic, getter=isRootGroup) BOOL rootGroup;
@property (retain, nonatomic) AXElement *elementCommunity;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL canBeGroupedWithOtherGroupables;
@property (readonly, nonatomic) BOOL canBeReplacedByChildren;
@property (readonly, nonatomic) BOOL allowsChangingExistingGroupingOfContents;
@property (readonly, nonatomic) BOOL shouldBeUngrouped;
@property (readonly, nonatomic) BOOL allowsVisualGroupingOfChildren;
@property (readonly, nonatomic) unsigned long long numberOfElements;
@property (nonatomic) AXElementGroup *parentGroup;
@property (nonatomic) unsigned long long userDefinedScanningBehaviorTraits;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupWithElements:(id)a0 label:(id)a1;
+ (id)groupWithElements:(id)a0;
+ (id)groupWithGenerator:(id)a0;

- (BOOL)isGroup;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)lastChild;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)firstChild;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithGenerator:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)childrenPassingTest:(id /* block */)a0;
- (BOOL)isKeyboardContainer;
- (id)highestAncestorGroup;
- (id)keyboardContainer;
- (BOOL)isKeyboardRow;
- (id)firstChildPassingTest:(id /* block */)a0;
- (id)descendantsPassingTest:(id /* block */)a0;
- (id)firstDescendantPassingTest:(id /* block */)a0;
- (id)nextSiblingOfChild:(id)a0 didWrap:(BOOL *)a1;
- (id)previousSiblingOfChild:(id)a0 didWrap:(BOOL *)a1;
- (id)groupByRemovingGroupable:(id)a0;
- (id)initWithElements:(id)a0 label:(id)a1;
- (void)_commonInitWithElements:(id)a0 label:(id)a1 generator:(id)a2;
- (void)unregisterAllGroupObservers;
- (void)_transferStateToGroup:(id)a0;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)a0;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)a0;
- (void)_generateGroupsIfNeeded;
- (id)_siblingOfChild:(id)a0 inDirection:(BOOL)a1 didWrap:(BOOL *)a2;
- (void)enumerateLeafDescendantsUsingBlock:(id /* block */)a0;
- (id)ancestorPassingTest:(id /* block */)a0;
- (id)descendantWithNativeFocus;
- (id)_leafAXElementWithPosition:(long long)a0;
- (id)debugFullDescription;
- (id)_debugDescriptionForTraits;
- (id)_debugDescriptionForScanningBehaviorTraits;
- (id)_debugFullDescriptionWithIndent:(id)a0;
- (id)groupByPrependingGroupable:(id)a0;
- (id)groupByAppendingGroupable:(id)a0;
- (id)groupByReplacingGroupable:(id)a0 withGroupable:(id)a1;
- (id)firstChildMatchingItem:(id)a0;
- (id)firstDescendantMatchingItem:(id)a0;
- (id)firstLeafDescendant;
- (id)keyboardContainerRows;
- (id)keyboardRow;
- (BOOL)containsNativeFocusElement;
- (id)leftMostLeafAXElement;
- (id)rightMostLeafAXElement;
- (id)topMostLeafAXElement;
- (id)bottomMostLeafAXElement;
- (void)registerGroupObserver:(id)a0;
- (void)unregisterGroupObserver:(id)a0;
- (id)_debugBriefDescription;

@end
