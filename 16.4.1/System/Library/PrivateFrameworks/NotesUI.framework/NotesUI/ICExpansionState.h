@class NSMutableDictionary, NSDictionary, NSManagedObjectContext;

@interface ICExpansionState : NSObject

@property (class, readonly, nonatomic) ICExpansionState *sharedExpansionState;

@property (retain, nonatomic) NSMutableDictionary *expansionState;
@property (retain, nonatomic) NSManagedObjectContext *modernViewContext;
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext;
@property (readonly, nonatomic) NSDictionary *archiveDictionary;

- (id)init;
- (void).cxx_destruct;
- (void)expandItemIdentifier:(id)a0 inContext:(id)a1;
- (void)applyArchiveDictionary:(id)a0;
- (id)archivableIdentifierForItemIdentifier:(id)a0;
- (void)collapseItemIdentifier:(id)a0 inContext:(id)a1;
- (id)expandedObjectIDsInContext:(id)a0;
- (id)identifierForArchivableIdentifier:(id)a0 itemType:(id)a1;
- (BOOL)isSectionIdentiferExpanded:(id)a0 inContext:(id)a1;
- (id)itemTypeForItemIdentifier:(id)a0;
- (id)normalizedContext:(id)a0;
- (id)normalizedItemIdentifier:(id)a0;
- (void)setExpanded:(BOOL)a0 itemIdentifier:(id)a1 itemType:(id)a2 inContext:(id)a3;

@end
