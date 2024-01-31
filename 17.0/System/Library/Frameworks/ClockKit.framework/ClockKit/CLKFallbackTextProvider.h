@class NSArray;

@interface CLKFallbackTextProvider : CLKTextProvider

@property (readonly, nonatomic) NSArray *textProviders;

+ (BOOL)supportsSecureCoding;
+ (id)providerWithProviders:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_updateFrequency;
- (long long)timeTravelUpdateFrequency;
- (id)initWithTextProviders:(id)a0;

@end
