@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSSet *indices;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
