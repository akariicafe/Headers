@class NSString, SBHIconLibraryQueryResult, NSHashTable, SBHIconModel, NSMapTable;
@protocol SBHIconLibraryQueryEngine;

@interface SBHTableViewIconLibrary : NSObject <SBHIconLibraryQueryEngineObserver> {
    NSHashTable *_observers;
    NSMapTable *_completionHandlerForQuery;
}

@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) id<SBHIconLibraryQueryEngine> queryEngine;
@property (readonly, nonatomic) SBHIconLibraryQueryResult *lastQueryResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeQuery:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithIconModel:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)engine:(id)a0 queryResultsWereUpdated:(id)a1;
- (void)_dispatchQueryResult:(id)a0;
- (void)engine:(id)a0 failedToExecuteQuery:(id)a1 withError:(id)a2;
- (void)executeQuery:(id)a0 completion:(id /* block */)a1;
- (id)initWithIconModel:(id)a0 queryEngine:(id)a1;

@end
