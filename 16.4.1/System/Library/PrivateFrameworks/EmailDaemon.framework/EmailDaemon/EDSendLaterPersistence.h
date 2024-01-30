@class NSString, EDPersistenceDatabase, NSObject;
@protocol OS_os_log, OS_dispatch_queue, EDMessageChangeHookResponder;

@interface EDSendLaterPersistence : NSObject <EFLoggable, EDPersistenceDatabaseSchemaProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly, weak, nonatomic) id<EDMessageChangeHookResponder> hookResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 hookResponder:(id)a1;
- (void)persistSendLaterForMessages:(id)a0 date:(id)a1;

@end
