@class NSDictionary, NSString, NSArray;

@interface WCAFetchSQLiteRequest : WCAFetchRequest

@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSArray *columnNames;
@property (nonatomic) long long limit;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
