@class NSString, PPLocalContactStore, PPSQLDatabase, PPLocalNamedEntityStore;

@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor> {
    PPSQLDatabase *_db;
    PPLocalContactStore *_contactStore;
    PPLocalNamedEntityStore *_namedEntityStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldImport;
+ (id)defaultInstance;

- (id)_sourceForContactWithContactIdentifier:(id)a0;
- (void)_registerForNotifications;
- (id)init;
- (BOOL)_handleNotificationWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_deleteContactWithIdentifier:(id)a0;
- (id)initWithDatabase:(id)a0;
- (BOOL)importScoredContact:(id)a0 contactsIdentifier:(id)a1 error:(id *)a2;
- (id)_entitiesForScoredContact:(id)a0;
- (void)_updateContactWithIdentifier:(id)a0;
- (id)_loadContactIdentifiersAlreadyImportedInPastDay;
- (void)visitDeleteContactEvent:(id)a0;
- (void)_addContactWithIdentifier:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (BOOL)_deleteAndReAddWholeContact:(id)a0 contactIdentifier:(id)a1;
- (BOOL)_donateScoredNamedEntities:(id)a0 source:(id)a1 error:(id *)a2;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void)importContactsDataWithShouldContinueBlock:(id /* block */)a0;
- (id)_scoredContactWithContactIdentifier:(id)a0;
- (void)_removeStashedImportedContacts;
- (void)_stashImportedContactsIdentifiers:(id)a0;

@end
