@class NSString, NSMutableArray;

@interface TSCECellDependenciesPrinter : NSObject

@property (retain, nonatomic) NSMutableArray *dirtyCellDependencyRows;
@property (retain, nonatomic) NSMutableArray *cleanCellDependencyRows;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) unsigned long long numDirtyCells;
@property (nonatomic) BOOL showCleanCells;

+ (id)stringForOwnerKind:(unsigned short)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addDependencyRow:(id)a0;

@end
