@class NSDictionary;

@interface HDSQLiteDatabaseSchema : NSObject

@property (retain, nonatomic) NSDictionary *tables;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
