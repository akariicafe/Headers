@class NSSQLBinaryIndex;

@interface NSSQLIndexIntermediate : NSSQLIntermediate {
    NSSQLBinaryIndex *_index;
    BOOL _isHandlingExpressions;
}

- (id)generateSQLStringInContext:(id)a0;
- (id)governingEntity;
- (void)dealloc;
- (BOOL)isIndexScoped;
- (id)initForIndex:(id)a0 withScope:(id)a1;
- (BOOL)isIndexExpressionScoped;

@end
