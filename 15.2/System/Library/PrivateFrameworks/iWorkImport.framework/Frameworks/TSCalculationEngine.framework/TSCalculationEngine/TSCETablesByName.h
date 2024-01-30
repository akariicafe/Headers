@class TSCETablesByNameDistributor, NSMutableDictionary, TSCECalculationEngine;

@interface TSCETablesByName : NSObject {
    NSMutableDictionary *_tablesByTableNameByContainerName;
    TSCECalculationEngine *_calcEngine;
}

@property (readonly, nonatomic) TSCETablesByNameDistributor *tableNameChangeDistributor;

+ (id)tableNameForTable:(id)a0;
+ (id)containerNameForTable:(id)a0;

- (void)removeAllObjects;
- (id)description;
- (void).cxx_destruct;
- (void)dropTable:(id)a0;
- (id)resolverMatchingName:(id)a0;
- (id)resolversMatchingPrefix:(id)a0;
- (BOOL)resolverNameIsUsed:(id)a0;
- (id)initWithCalcEngine:(id)a0;
- (void)dropTable:(id)a0 withTableName:(id)a1 withContainerName:(id)a2;
- (void)addTable:(id)a0;
- (id)tableForTableName:(id)a0 containerName:(id)a1;
- (void)renameTable:(id)a0 fromName:(id)a1;
- (id)anyTableForTableName:(id)a0;

@end
