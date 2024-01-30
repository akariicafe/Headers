@class NSString, NSArray;

@interface HDSQLiteDatabaseIndexSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *columns;
@property (nonatomic) BOOL isUnique;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
