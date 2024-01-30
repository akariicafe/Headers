@class MPUQueryDataSource, NSString, NSArray, NSOperationQueue, _MPUSearchOperation;

@interface MPUSearchDataSource : MPUQueryDataSource {
    NSOperationQueue *_operationQueue;
    _MPUSearchOperation *_searchOperation;
    NSArray *_searchResults;
}

@property (readonly, nonatomic) MPUQueryDataSource *dataSource;
@property (readonly, nonatomic) NSString *searchString;

- (id)initWithDataSource:(id)a0;
- (id)entities;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithDataSource:(id)a0 operationQueue:(id)a1;
- (void)filterResultsUsingSearchString:(id)a0 completion:(id /* block */)a1;
- (id)_searchPropertiesForGroupingType:(long long)a0;
- (void)filterResultsUsingSearchString:(id)a0;
- (void)_searchOperation:(id)a0 didFinishWithResults:(id)a1;

@end
