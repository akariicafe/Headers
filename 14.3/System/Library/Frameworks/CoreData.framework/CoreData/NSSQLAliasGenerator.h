@class NSString;

@interface NSSQLAliasGenerator : NSObject {
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    unsigned int _nextTempTableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}

- (id)init;
- (id)generateVariableAlias;
- (void)dealloc;
- (id)initWithNestingLevel:(unsigned int)a0;
- (id)generateTableAlias;
- (id)generateSubqueryVariableAlias;
- (id)generateTempTableName;

@end
