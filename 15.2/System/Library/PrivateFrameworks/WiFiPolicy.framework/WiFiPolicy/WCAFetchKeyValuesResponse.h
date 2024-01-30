@class NSDictionary;

@interface WCAFetchKeyValuesResponse : WCAFetchResponse

@property (copy, nonatomic) NSDictionary *keyValues;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithKeyValues:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
