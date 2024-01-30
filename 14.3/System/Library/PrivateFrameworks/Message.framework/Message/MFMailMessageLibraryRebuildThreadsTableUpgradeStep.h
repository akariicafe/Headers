@class NSString;

@interface MFMailMessageLibraryRebuildThreadsTableUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;
+ (id)_threadsTableSchemaWithMessagesTable:(id)a0 conversationsTable:(id)a1 threadScopesTable:(id)a2;


@end
