@class NSSet, NSMutableDictionary, NSDictionary;

@interface HMBLocalSQLContextQueryTable : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *mutableIndexes;
@property (readonly, nonatomic) NSSet *columnNames;
@property (readonly, nonatomic) NSDictionary *indexes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithColumnNames:(id)a0;

@end
