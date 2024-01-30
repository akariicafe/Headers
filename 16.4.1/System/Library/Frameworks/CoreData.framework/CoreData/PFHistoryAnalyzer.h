@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {
    PFHistoryAnalyzerOptions *_options;
}

- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)a0;

@end
