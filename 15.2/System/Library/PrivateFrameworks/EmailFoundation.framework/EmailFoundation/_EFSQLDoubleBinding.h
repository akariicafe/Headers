@interface _EFSQLDoubleBinding : EFSQLBinding

@property (readonly, nonatomic) double doubleValue;

- (id)initWithDouble:(double)a0;
- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;

@end
