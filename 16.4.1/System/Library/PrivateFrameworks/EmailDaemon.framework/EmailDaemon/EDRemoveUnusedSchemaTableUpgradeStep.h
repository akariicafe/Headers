@class NSString, NSObject;
@protocol OS_os_log;

@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_recreateMessagesIndices:(id)a0;
+ (int)runWithConnection:(id)a0;
+ (int)_copyMessagesData:(id)a0;
+ (int)_createTempMessagesTable:(id)a0;
+ (int)_dropTable:(id)a0 connection:(id)a1;
+ (int)_dropThreadCategoriesIndex:(id)a0;
+ (int)_recreateThreadsIndices:(id)a0;
+ (int)_recreateThreadsTable:(id)a0;
+ (int)_swapMessagesTables:(id)a0;
+ (int)_truncateTable:(id)a0 connection:(id)a1;


@end
