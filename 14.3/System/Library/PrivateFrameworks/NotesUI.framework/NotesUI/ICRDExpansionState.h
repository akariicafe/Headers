@class NSMutableDictionary, NSDictionary, NSManagedObjectContext;

@interface ICRDExpansionState : NSObject

@property (class, readonly, nonatomic) ICRDExpansionState *sharedExpansionState;

@property (retain, nonatomic) NSMutableDictionary *expansionState;
@property (retain, nonatomic) NSManagedObjectContext *modernViewContext;
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext;
@property (readonly, nonatomic) NSDictionary *archiveDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)archivableIdentifierForItemIdentifier:(id)a0;
- (id)identifierForArchivableIdentifier:(id)a0 itemType:(id)a1;
- (void)setExpanded:(BOOL)a0 itemIdentifier:(id)a1 itemType:(id)a2 inContext:(id)a3;
- (id)normalizedContext:(id)a0;
- (id)itemTypeForItemIdentifier:(id)a0;
- (id)normalizedItemIdentifier:(id)a0;
- (void)applyArchiveDictionary:(id)a0;
- (id)expandedObjectIDsInContext:(id)a0;
- (BOOL)isSectionIdentiferExpanded:(id)a0 inContext:(id)a1;
- (void)expandItemIdentifier:(id)a0 inContext:(id)a1;
- (void)collapseItemIdentifier:(id)a0 inContext:(id)a1;

@end
