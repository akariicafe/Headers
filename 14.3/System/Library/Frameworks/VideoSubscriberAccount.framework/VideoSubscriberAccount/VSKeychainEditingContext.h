@class NSSet, NSUndoManager, NSMutableSet, VSKeychainStore;

@interface VSKeychainEditingContext : NSObject

@property (retain, nonatomic) NSMutableSet *items;
@property (retain, nonatomic) VSKeychainStore *keychainStore;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) NSSet *insertedItems;
@property (readonly, nonatomic) NSSet *updatedItems;
@property (readonly, nonatomic) NSSet *deletedItems;
@property (readonly, nonatomic) NSSet *registeredItems;

- (BOOL)save:(id *)a0;
- (id)init;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)insertItem:(id)a0;
- (void)deleteItem:(id)a0;
- (void)fulfillFault:(id)a0;
- (void)_populateQuery:(struct __CFDictionary { } *)a0 usingPredicate:(id)a1 withItemKind:(id)a2;
- (id)_findOrCreateItemForCommittedValues:(id)a0 withItemKind:(id)a1;
- (id)_queryForItemValues:(id)a0 withItemKind:(id)a1;
- (void)_populateResult:(id)a0 forRequest:(id)a1 fromMatch:(id)a2;
- (id)_subsetOfRegisteredItemsWithKeyPath:(id)a0;
- (void)_populateErrors:(id)a0 withError:(id)a1 affectingItem:(id)a2;

@end
