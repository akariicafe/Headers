@class NSString, NSArray;

@interface ML3MutableDatabaseTable : ML3DatabaseTable

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *foreignKeyConstraints;

- (void)setName:(id)a0;
- (void)setColumns:(id)a0;
- (void)setForeignKeyConstraints:(id)a0;

@end
