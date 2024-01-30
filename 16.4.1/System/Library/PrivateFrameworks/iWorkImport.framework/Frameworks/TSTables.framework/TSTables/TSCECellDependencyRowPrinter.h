@class NSString, TSCEEdgeListPrinter;

@interface TSCECellDependencyRowPrinter : NSObject

@property (retain, nonatomic) TSCEEdgeListPrinter *precedentsList;
@property (retain, nonatomic) TSCEEdgeListPrinter *dependentsList;
@property (retain, nonatomic) NSString *cellID;
@property (nonatomic) unsigned long long dirtyPrecedentCount;
@property (nonatomic) BOOL isFormula;
@property (nonatomic) BOOL isInCycle;

- (void).cxx_destruct;
- (void)addDependentWithCellID:(id)a0 forOwner:(id)a1;
- (void)addPrecedentWithCellID:(id)a0 forOwner:(id)a1;
- (id)initWithCellID:(id)a0 dirtyPrecedentCount:(unsigned long long)a1;
- (id)stringForDependencyRow;
- (long long)tsce_numericCompare:(id)a0;

@end
