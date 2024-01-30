@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (void)load;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;
+ (id)defaultOptionsWithIgnoreDuplicates;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;
- (void)_swizzledEncodeWithCoder:(id)a0;

@end
