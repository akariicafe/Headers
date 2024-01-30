@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex *_index;
    BOOL _isHandlingExpressions;
}

- (id)governingEntity;
- (void)dealloc;
- (BOOL)isIndexScoped;
- (id)initForIndex:(id)a0 withScope:(id)a1;
- (BOOL)isIndexExpressionScoped;
- (id)generateSQLStringInContext:(id)a0;
- (id)_generateSQLForExpressionDescription:(id)a0 inContext:(id)a1;

@end
