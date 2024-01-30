@class WBSHistorySessionController, NSOrderedSet, NSString, WBSSiriIntelligenceHistorySearch;
@protocol HistoryTableViewDataSourceDelegate;

@interface HistoryTableViewDataSource : NSObject {
    WBSHistorySessionController *_sessionController;
    WBSSiriIntelligenceHistorySearch *_siriHistorySearch;
    NSOrderedSet *_currentSessions;
    NSOrderedSet *_currentUnfilteredSessions;
    NSString *_filterString;
    struct { BOOL updating; BOOL didChangeFilter; BOOL didChangeExternally; unsigned long long progressiveFilterState; } _needsUpdateFlags;
}

@property (weak, nonatomic) id<HistoryTableViewDataSourceDelegate> delegate;

- (void)_updateIfNeeded;
- (unsigned long long)numberOfSections;
- (id)titleForHeaderInSection:(long long)a0;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)historyChanged:(id)a0;
- (id)_browsingSessions;
- (id)_browsingSessions:(id)a0 filteredUsingString:(id)a1 urlStrings:(id)a2;
- (id)_computeChangeSetBetweenOldHistorySession:(id)a0 newHistorySession:(id)a1 oldSectionIndex:(long long)a2 newSectionIndex:(long long)a3;
- (id)_computeChangeSetBetweenOldHistorySessions:(id)a0 newHistorySessions:(id)a1;
- (void)_fetchURLStringsContainingTextContent:(id)a0 completionHandler:(id /* block */)a1;
- (id)_historySession:(id)a0 filteredUsingHistoryItemsPredicate:(id)a1;
- (void)_incrementallyUpdateWithNewSessions:(id)a0 forFilterChangeOnly:(BOOL)a1;
- (void)_reportChangeToDelegate:(id)a0;
- (void)_setCurrentBrowsingSessions:(id)a0 computingIndividualChanges:(BOOL)a1;
- (void)deleteHistoryItemAtIndexPath:(id)a0;
- (void)filterUsingString:(id)a0;
- (id)historyItemForRowAtIndexPath:(id)a0;
- (id)historyTableViewCellModelForRowAtIndexPath:(id)a0;

@end
