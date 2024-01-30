@class NSArray;

@interface MLArrayDictionaryFeatureProvider : NSObject <MLBatchProvider, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *array;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)initWithDictionaryFeatureProviderArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)featuresAtIndex:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
