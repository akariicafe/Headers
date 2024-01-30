@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSSet *indices;
@property (retain, nonatomic) NSSet *triggers;
@property (copy, nonatomic) NSString *createTableSchema;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
