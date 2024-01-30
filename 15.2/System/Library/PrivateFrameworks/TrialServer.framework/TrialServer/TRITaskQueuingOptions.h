@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (id)defaultOptionsWithIgnoreDuplicates;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;
+ (void)load;

- (void)encodeWithCoder:(id)a0;
- (void)_swizzledEncodeWithCoder:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;

@end
