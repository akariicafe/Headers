@class TPSSize;

@interface TPSSizes : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TPSSize *compact;
@property (retain, nonatomic) TPSSize *regular;

+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)heightToWidthRatioForViewMode:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
