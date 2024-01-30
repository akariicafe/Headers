@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest

@property (copy, nonatomic) NSArray *keys;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
