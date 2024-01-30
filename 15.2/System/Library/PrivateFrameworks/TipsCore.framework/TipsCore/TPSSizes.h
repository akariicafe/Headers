@class TPSSize;

@interface TPSSizes : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TPSSize *compact;
@property (copy, nonatomic) TPSSize *regular;

+ (id)na_identity;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (double)heightToWidthRatioForViewMode:(long long)a0;

@end
