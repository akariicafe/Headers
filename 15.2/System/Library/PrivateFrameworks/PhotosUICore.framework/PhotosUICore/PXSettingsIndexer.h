@class NSProgress, PXSettingsIndex, PXSettings, NSMutableArray;

@interface PXSettingsIndexer : NSObject

@property (readonly, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *indexingProgress;
@property (retain, nonatomic) PXSettingsIndex *index;
@property (readonly, nonatomic) PXSettings *rootSettings;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRootSettings:(id)a0;
- (id)startIndexingWithCompletionHandler:(id /* block */)a0;
- (void)_startIndexingIfNecessary;
- (void)_handleResultIndex:(id)a0;
- (void)_callCompletionHandlersIfNecessary;

@end
