@class NSSet;

@interface PGDeduper : NSObject

@property (copy, nonatomic) NSSet *identifiersOfRequiredItems;

- (void).cxx_destruct;
- (BOOL)itemIsRequired:(id)a0;
- (id)deduplicatedItemsWithItems:(id)a0 debugInfo:(id)a1 progressBlock:(id /* block */)a2;
- (id)requiredItemsInItems:(id)a0;

@end
