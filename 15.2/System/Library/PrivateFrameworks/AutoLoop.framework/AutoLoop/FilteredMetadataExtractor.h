@class NSMutableArray;

@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor

@property (retain) NSMutableArray *filteredKeysArray;

- (void).cxx_destruct;
- (id)init;
- (void)removeMetadataFromInterpolatedFrameDict:(id)a0;
- (int)processFile;

@end
