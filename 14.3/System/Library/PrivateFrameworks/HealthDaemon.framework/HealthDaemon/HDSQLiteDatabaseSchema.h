@class NSDictionary;

@interface HDSQLiteDatabaseSchema : NSObject

@property (retain, nonatomic) NSDictionary *tables;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
