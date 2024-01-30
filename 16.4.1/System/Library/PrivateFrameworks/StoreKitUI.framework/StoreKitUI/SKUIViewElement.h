@class NSString, NSSet, NSArray, NSMutableArray;
@protocol SKUIEntityProviding, NSCopying, IKEntityValueProviding;

@interface SKUIViewElement : IKViewElement {
    id<SKUIEntityProviding> _entityProvider;
    NSMutableArray *_flattenedChildren;
    BOOL _hasValidEntityProvider;
}

@property (readonly, copy, nonatomic) NSString *indexBarEntryID;
@property (readonly, nonatomic, getter=isDynamicContainer) BOOL dynamicContainer;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) id<SKUIEntityProviding> entityProvider;
@property (readonly, nonatomic) id<SKUIEntityProviding> explicitEntityProvider;
@property (retain, nonatomic) id<IKEntityValueProviding> entityValueProvider;
@property (retain, nonatomic) id<IKEntityValueProviding> explicitEntityValueProvider;
@property (readonly, nonatomic) NSSet *entityValueProperties;
@property (readonly, nonatomic) NSArray *flattenedChildren;
@property (readonly, retain, nonatomic) NSString *itmlID;
@property (readonly, nonatomic) long long pageComponentType;
@property (readonly, nonatomic) NSSet *personalizationLibraryItems;
@property (readonly, nonatomic) long long pinStyle;
@property (readonly, nonatomic) long long pinGroup;
@property (readonly, nonatomic) BOOL rendersWithParallax;
@property (readonly, nonatomic) BOOL rendersWithPerspective;
@property (readonly, nonatomic) id<NSCopying> uniquingMapKey;

- (id)elementWithIdentifier:(id)a0;
- (id)persistenceKey;
- (void)dealloc;
- (void).cxx_destruct;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)featureWithName:(id)a0;
- (void)_entityProviderDidInvalidateNotification:(id)a0;
- (void)_entityValueProviderDidChange;
- (void)_registerForNotificationsForEntityProvider:(id)a0;
- (void)_unregisterForNotificationsForEntityProvider:(id)a0;
- (id)ancestorElementMatchingPredicate:(id /* block */)a0;
- (id)ancestorElementOfType:(unsigned long long)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (BOOL)canMoveWithinCollection;
- (BOOL)descendsFromElementWithType:(unsigned long long)a0;
- (void)entityValueProviderDidChange;
- (void)enumerateViewElementsWithDictionary:(id)a0 factory:(id)a1 usingBlock:(id /* block */)a2;
- (id)expandableLabelElementForWidth:(double)a0 context:(id)a1;
- (id)firstChildForElementName:(id)a0;
- (id)firstChildForElementType:(unsigned long long)a0;
- (id)firstDescendentWithIndexBarEntryID:(id)a0;
- (BOOL)handlesBackgroundColorDirectly;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (BOOL)isDescendentFromViewElement:(id)a0;

@end
