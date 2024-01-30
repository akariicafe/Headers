@class NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager

@property (readonly, nonatomic) NSMutableDictionary *fileURLsBySection;

- (void).cxx_destruct;
- (id)initWithFileURLsBySection:(id)a0;
- (void)removeFileURLsAtIndexes:(id)a0 inSection:(long long)a1;
- (void)insertFileURL:(id)a0 atIndex:(long long)a1 inSection:(long long)a2;
- (void)_createDataSource;

@end
