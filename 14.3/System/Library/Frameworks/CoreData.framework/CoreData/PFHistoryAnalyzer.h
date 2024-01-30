@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject

@property (readonly, copy, nonatomic) PFHistoryAnalyzerOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;
- (id)newAnalyzerContextForStore:(id)a0 sinceLastHistoryToken:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;

@end
