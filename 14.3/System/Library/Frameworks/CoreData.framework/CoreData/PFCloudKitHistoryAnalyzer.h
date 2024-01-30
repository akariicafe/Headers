@class NSManagedObjectContext, NSPersistentHistoryToken;

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSPersistentHistoryToken *lastProcessedToken;

+ (BOOL)isPrivateTransaction:(id)a0;
+ (BOOL)isPrivateTransactionAuthor:(id)a0;
+ (BOOL)isPrivateContextName:(id)a0;

- (void)dealloc;
- (id)cloudKitAnalyzerOptions;
- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)initWithOptions:(id)a0 managedObjectContext:(id)a1;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;

@end
