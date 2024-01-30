@class NSString;

@interface _EFSQLStringBinding : EFSQLBinding

@property (readonly, copy, nonatomic) NSString *stringValue;

- (id)initWithString:(id)a0;
- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;
- (void).cxx_destruct;

@end
