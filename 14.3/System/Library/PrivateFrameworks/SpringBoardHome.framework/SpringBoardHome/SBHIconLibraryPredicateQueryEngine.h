@class SBHIconLibraryQueryContext;

@interface SBHIconLibraryPredicateQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;
}

- (void).cxx_destruct;
- (void)executeQuery:(id)a0;
- (void)_processingQueue_teardownQueryContext:(id)a0;

@end
