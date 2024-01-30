@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) long long bucket;
@property (nonatomic) double magnitude;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
