@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) int color;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)localizedCompare:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)localizedStandardCompare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTag:(id)a0;
- (id)initWithLabel:(id)a0 color:(int)a1;
- (void)encodeWithCoder:(id)a0;

@end
