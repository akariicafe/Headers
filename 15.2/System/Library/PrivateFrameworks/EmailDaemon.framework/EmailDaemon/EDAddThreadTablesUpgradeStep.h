@class EFSQLTableSchema, NSString;

@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>

@property (class, readonly, nonatomic) EFSQLTableSchema *threadScopesTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadsTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadMailboxesTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadSendersTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadRecipientsTableSchema;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;
+ (id)_schemaWithMessagesTable:(id)a0 mailboxesTable:(id)a1 conversationsTable:(id)a2;


@end
