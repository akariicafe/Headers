@class WFCoercionOptions, NSArray, WFContentAttributionSet, NSLock, NSMutableArray;

@interface WFContentCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *mutableItems;
@property (retain, nonatomic) NSLock *itemWriteLock;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) WFCoercionOptions *defaultCoercionOptions;
@property (readonly, nonatomic) WFContentAttributionSet *attributionSet;

+ (id)collectionWithItems:(id)a0;
+ (void)generateCollectionFromPasteboard:(id)a0 completionHandler:(id /* block */)a1;
+ (void)generateCollectionFromDragItems:(id)a0 allowedItemClasses:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getContentItemsForPasteboardItems:(id)a0 resultBlock:(id /* block */)a1;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)addFile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addItems:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id)extensionItems;
- (void)encodeWithCoder:(id)a0;
- (void)getFileRepresentations:(id /* block */)a0 forType:(id)a1;
- (void)getStringRepresentation:(id /* block */)a0;
- (void)getObjectRepresentations:(id /* block */)a0 forClass:(Class)a1;
- (id)collectionByFilteringToItemClass:(Class)a0 excludedItems:(id *)a1;
- (void)transformItemsAndFlattenUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)getObjectRepresentation:(id /* block */)a0 forClass:(Class)a1;
- (void)generateCollectionByCoercingToItemClasses:(id)a0 completionHandler:(id /* block */)a1;
- (id)collectionByMergingAttributionSet:(id)a0;
- (void)generateCollectionByCoercingToItemClass:(Class)a0 completionHandler:(id /* block */)a1;
- (void)getStringRepresentations:(id /* block */)a0;
- (void)performCoercion:(id)a0;
- (void)copyToPasteboard:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)getFileRepresentation:(id /* block */)a0 forType:(id)a1;
- (void)getObjectRepresentationAndAttributionSet:(id /* block */)a0 forClass:(Class)a1;
- (id)collectionByFilteringItemsWithBlock:(id /* block */)a0 excludedItems:(id *)a1;
- (void)transformItemsUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)generateCollectionByEvaluatingQuery:(id)a0 forContentItemClass:(Class)a1 completionHandler:(id /* block */)a2;
- (id)minimalExtensionItems;
- (id)initWithDefaultCoercionOptions:(id)a0;
- (id)initWithItems:(id)a0 defaultCoercionOptions:(id)a1;
- (void)addObject:(id)a0 named:(id)a1;
- (void)enumerateObjectRepresentations:(id /* block */)a0 forClass:(Class)a1 completionHandler:(id /* block */)a2;
- (void)enumerateFileRepresentations:(id /* block */)a0 forType:(id)a1 completionHandler:(id /* block */)a2;
- (void)getFileRepresentationAndAttributionSet:(id /* block */)a0 forType:(id)a1;
- (BOOL)canPerformCoercion:(id)a0;
- (id)effectiveCoercionOptionsForRequest:(id)a0;
- (void)getObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)getFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateCollectionByCoercingToItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isCoercibleToItemClass:(Class)a0;
- (BOOL)isCoercibleToItemClasses:(id)a0;
- (void)transformObjectRepresentationsForClass:(Class)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)transformFileRepresentationsForType:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)transformFirstObjectRepresentationForClass:(Class)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)transformFirstFileRepresentationForType:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
