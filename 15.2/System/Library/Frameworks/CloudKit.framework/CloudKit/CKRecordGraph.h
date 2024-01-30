@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject {
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}

+ (id)topologicallySortRecords:(id)a0 withError:(id *)a1;

- (id)recordsByTopologicalSortWithError:(id *)a0;
- (id)description;
- (BOOL)addRecords:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
