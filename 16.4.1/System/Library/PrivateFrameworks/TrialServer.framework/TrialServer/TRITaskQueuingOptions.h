@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (id)defaultOptionsWithIgnoreDuplicates;
+ (void)load;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_swizzledEncodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;
- (id)init;
- (id)description;

@end
