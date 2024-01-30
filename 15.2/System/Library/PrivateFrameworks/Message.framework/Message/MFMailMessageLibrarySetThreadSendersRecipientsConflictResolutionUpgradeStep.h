@class EFSQLTableSchema, NSString;

@interface MFMailMessageLibrarySetThreadSendersRecipientsConflictResolutionUpgradeStep : NSObject <EDTableUpgradeStep>

@property (class, readonly, nonatomic) EFSQLTableSchema *threadSendersTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *threadRecipientsTableSchema;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;
+ (id)_schemaWithThreadsTable:(id)a0;


@end
