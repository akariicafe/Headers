@interface ML3DatabaseStatementRenderer : NSObject

+ (id)defaultRenderer;

- (id)statementWithPrefix:(id)a0 inParameterCount:(unsigned long long)a1;
- (id)insertStatementWithOptions:(id)a0;
- (id)savepointReleaseStatementWithName:(id)a0;
- (id)commitTransactionStatement;
- (id)rollbackTranscationStatement;
- (id)beginTransactionStatementWithBehaviorType:(unsigned long long)a0;
- (id)savepointStatementWithName:(id)a0;
- (id)rollbackTranscationStatementToSavepointName:(id)a0;
- (id)insertStatementUsingDefaultValuesForTableName:(id)a0;
- (id)insertStatementForTableName:(id)a0 columnNames:(id)a1;

@end
