@class NSString, NSArray, NSMutableArray, MPSectionedIdentifierList;

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection>

@property (retain, nonatomic) NSMutableArray *mutableItemIdentifiers;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, weak, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (void)insertItems:(id)a0 afterItem:(id)a1;
- (void)moveItemToHead:(id)a0;
- (void)moveItemToTail:(id)a0;
- (void)applyChanges:(id)a0 itemLookupBlock:(id /* block */)a1;
- (id)initWithSection:(id)a0 sectionedIdentifierList:(id)a1 existingItemIdentifiers:(id)a2;
- (void)insertItemsAtHead:(id)a0;
- (void)insertItemsAtTail:(id)a0;
- (void)moveItem:(id)a0 afterItem:(id)a1;
- (void)updateItems:(id)a0;
- (void)updateSection;

@end
