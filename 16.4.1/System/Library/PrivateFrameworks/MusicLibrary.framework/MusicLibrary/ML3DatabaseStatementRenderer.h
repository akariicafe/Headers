@interface ML3DatabaseStatementRenderer : NSObject

+ (id)defaultRenderer;

- (id)rollbackTranscationStatementToSavepointName:(id)a0;
- (id)rollbackTranscationStatement;
- (id)savepointReleaseStatementWithName:(id)a0;
- (id)statementWithPrefix:(id)a0 inParameterCount:(unsigned long long)a1;
- (id)savepointStatementWithName:(id)a0;
- (id)insertStatementForTableName:(id)a0 columnNames:(id)a1;
- (id)beginTransactionStatementWithBehaviorType:(unsigned long long)a0;
- (id)insertStatementUsingDefaultValuesForTableName:(id)a0;
- (id)commitTransactionStatement;
- (id)insertStatementWithOptions:(id)a0;

@end
