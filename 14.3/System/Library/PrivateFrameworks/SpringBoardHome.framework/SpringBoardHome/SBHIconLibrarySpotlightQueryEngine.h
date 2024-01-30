@class SBHIconLibraryQueryContext;

@interface SBHIconLibrarySpotlightQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;
}

- (void).cxx_destruct;
- (void)executeQuery:(id)a0;
- (void)_processingQueue_teardownQueryContext:(id)a0;
- (id /* block */)_processingQueue_sortComperatorForQueryContext:(id)a0;
- (void)_processingQueue_noteQueryResultsWereUpdated:(id)a0 iconLibraryQueryContext:(id)a1 notifyDelegate:(BOOL)a2;
- (BOOL)_processingQueue_isBundleIdentifierValid:(id)a0 iconLibraryQueryContext:(id)a1;
- (id)_searchQueryForIconLibraryQuery:(id)a0;
- (id)_relevancyQueryForLibraryQuery:(id)a0;
- (void)_processingQueue_markBundleIdentifiers:(id)a0 iconLibraryQueryContext:(id)a1;
- (void)_processingQueue_unmarkBundleIdentifiers:(id)a0 iconLibraryQueryContext:(id)a1;
- (void)_processingQueue_updateQueryRelevancyScores:(id)a0 iconLibraryQueryContext:(id)a1;

@end
