@interface DAContainerProvider : NSObject

+ (id)providerWithContactStore:(id)a0;
+ (id)providerWithAddressBook:(void *)a0;

- (id)containerWithExternalIdentifier:(id)a0 forAccountWithExternalIdentifier:(id)a1;
- (void)setDefaultContainer:(id)a0 withLocalDBHelper:(id)a1 onlyIfNotSet:(BOOL)a2;
- (BOOL)setLastSyncDateForContainer:(id)a0;
- (id)createNewContainerWithType:(int)a0 name:(id)a1 externalIdentifier:(id)a2 constraintsPath:(id)a3 syncData:(id)a4 contentReadonly:(BOOL)a5 propertiesReadonly:(BOOL)a6 forAccount:(id)a7;
- (void)mergeAllRecordsIntoContainer:(id)a0 shouldInsertChangeHistoryRecords:(BOOL)a1;
- (id)allContainersForAccountWithExternalIdentifier:(id)a0;
- (id)allContainers;

@end
