@class NSManagedObjectContext, NSString, EDTaskScheduler, NSObject, NSPersistentContainer;
@protocol OS_os_log;

@interface EDCloudMirroringPersistentStore : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) EDTaskScheduler *importScheduler;
@property (retain, nonatomic) EDTaskScheduler *exportScheduler;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlockAndWait:(id /* block */)a0;
- (void)requestExportWithCompletionBlock:(id /* block */)a0;
- (id)_schedulerForKind:(int)a0;
- (void)performBlock:(id /* block */)a0;
- (void)requestImportWithCompletionBlock:(id /* block */)a0;
- (void)_requestWithKind:(int)a0 completionBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)_wrapCompletion:(id /* block */)a0 forRequestKind:(int)a1;
- (void)_setupCoreDataStack;
- (void)_executeRequestWithKind:(int)a0 completionBlock:(id /* block */)a1;

@end
