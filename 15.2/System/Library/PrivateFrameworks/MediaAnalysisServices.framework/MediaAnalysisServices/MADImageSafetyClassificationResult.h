@class NSDictionary;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSensitive:(BOOL)a0 andAttributes:(id)a1;

@end
