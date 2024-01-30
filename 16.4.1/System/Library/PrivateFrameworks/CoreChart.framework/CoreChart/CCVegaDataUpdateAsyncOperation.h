@class CCVegaRenderer, NSString, NSArray;

@interface CCVegaDataUpdateAsyncOperation : NSObject <CCAsyncOperation>

@property (weak, nonatomic) CCVegaRenderer *renderer;
@property (retain) NSString *namedDataset;
@property (retain) NSArray *rowsToInsert;
@property (copy) id /* block */ callbackForRowsToRemove;

- (void).cxx_destruct;
- (void)doDataUpdate:(id /* block */)a0;
- (void)performOperationWithCallback:(id /* block */)a0;

@end
