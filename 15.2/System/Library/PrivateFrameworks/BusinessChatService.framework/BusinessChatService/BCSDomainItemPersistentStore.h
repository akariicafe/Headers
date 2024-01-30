@class NSString;

@interface BCSDomainItemPersistentStore : BCSPersistentStore <BCSDomainItemCaching>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databasePath;
- (long long)schemaVersion;
- (const char *)schema;
- (void)deleteAllDomainItems;
- (void)updateDomainItem:(id)a0 withDomainItemIdentifier:(id)a1;
- (id)domainItemMatching:(id)a0;
- (BOOL)executeDeleteDomainDomainItemSQLQuery:(id)a0;
- (void)deleteDomainItemMatching:(id)a0;
- (void)deleteAllExpiredDomainItems;
- (void)updateDomainItemsForDomainShard:(id)a0;

@end
