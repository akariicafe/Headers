@class NSMutableSet, NSMutableDictionary;

@interface _UICommandInternalDiff : NSObject

@property (readonly, nonatomic) NSMutableSet *menuDeletes;
@property (readonly, nonatomic) NSMutableDictionary *itemDeletes;
@property (readonly, nonatomic) NSMutableDictionary *inserts;
@property (readonly, nonatomic) NSMutableDictionary *replacements;

- (void).cxx_destruct;
- (id)_deletesForMenu:(id)a0;
- (id)_parentInsertsForMenu:(id)a0;
- (id)_replacementsForMenu:(id)a0;
- (void)deleteItem:(id)a0 inMenu:(id)a1;
- (void)deleteMenu:(id)a0;
- (void)insertAtStartElements:(id)a0 atEndElements:(id)a1 inMenu:(id)a2;
- (void)insertBeforeElements:(id)a0 afterElements:(id)a1 aroundElement:(id)a2 inMenu:(id)a3;
- (void)insertFallbackBeforeElements:(id)a0 fallbackAfterElements:(id)a1 inMenu:(id)a2;
- (void)replaceItem:(id)a0 inMenu:(id)a1 withElements:(id)a2;

@end
