@class NSArray, ML3DatabaseTable;

@interface ML3DatabaseForeignKeyConstraint : NSObject

@property (readonly, nonatomic) ML3DatabaseTable *foreignTable;
@property (readonly, nonatomic) NSArray *localColumns;
@property (readonly, nonatomic) NSArray *foreignColumns;

- (void).cxx_destruct;
- (id)_foreignKeyClauseSQL;
- (id)initWithForeignTable:(id)a0 localColumns:(id)a1 foreignColumns:(id)a2;

@end
