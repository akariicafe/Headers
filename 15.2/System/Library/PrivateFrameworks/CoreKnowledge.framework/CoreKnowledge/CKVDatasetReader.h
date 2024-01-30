@class NSArray, CKVDatasetInfo;

@interface CKVDatasetReader : NSObject {
    NSArray *_segments;
}

@property (readonly, nonatomic) CKVDatasetInfo *datasetInfo;

+ (id)discoverDatasetsForSnapshot:(id)a0;
+ (void)_scanSnapshotDirectory:(id)a0 outInfoFiles:(id *)a1 outSegmentFiles:(id *)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInfoFileURL:(id)a0 segmentFiles:(id)a1;
- (BOOL)_enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)decodeDatasetToText:(id)a0 error:(id *)a1;

@end
