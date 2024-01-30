@class FCStreamingResults, NSString, FCTagRecordSource, NSError, FCAssetManager, FCCKContentDatabase;
@protocol FCContentContext;

@interface FCTagSearchOperation : FCOperation

@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) FCStreamingResults *searchResults;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) unsigned long long batchSize;
@property (copy) id /* block */ searchResultsBlock;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_performSearchQuery:(id /* block */)a0;
- (id)_establishStreamOfTags;
- (void).cxx_destruct;
- (id)_localIdentifier;

@end
