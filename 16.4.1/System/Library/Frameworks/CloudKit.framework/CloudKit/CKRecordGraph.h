@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject {
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}

+ (id)topologicallySortRecords:(id)a0 withError:(id *)a1;

- (BOOL)addRecords:(id)a0 error:(id *)a1;
- (id)recordsByTopologicalSortWithError:(id *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
