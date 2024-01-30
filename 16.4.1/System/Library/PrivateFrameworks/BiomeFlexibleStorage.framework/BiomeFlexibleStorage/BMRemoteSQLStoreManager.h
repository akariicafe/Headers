@interface BMRemoteSQLStoreManager : BMSQLStoreManager

@property (nonatomic) BOOL remoteOnly;

- (id)initWithURL:(id)a0;
- (id)deleteRowsDerivedFromStream:(id)a0 eventIdentifier:(id)a1;
- (BOOL)hasReadWriteAccessToURL:(id)a0;

@end
