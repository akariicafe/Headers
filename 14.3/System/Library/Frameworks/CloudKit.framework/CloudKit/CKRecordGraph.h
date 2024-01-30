@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject

@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSArray *sortedRecords;

+ (id)topologicallySortRecords:(id)a0 withError:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addRecords:(id)a0 error:(id *)a1;
- (id)recordsByTopologicalSortWithError:(id *)a0;
- (id)description;

@end
