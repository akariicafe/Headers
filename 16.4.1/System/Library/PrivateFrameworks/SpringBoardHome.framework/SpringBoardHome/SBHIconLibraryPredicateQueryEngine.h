@class SBHIconLibraryQueryContext;

@interface SBHIconLibraryPredicateQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;
}

- (void)executeQuery:(id)a0;
- (void).cxx_destruct;
- (void)_processingQueue_teardownQueryContext:(id)a0;

@end
