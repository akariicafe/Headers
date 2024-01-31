@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject {
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}

+ (id)topologicallySortRecords:(id)a0 withError:(id *)a1;

- (id)init;
- (id)description;
- (id)recordsByTopologicalSortWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)addRecords:(id)a0 error:(id *)a1;

@end
