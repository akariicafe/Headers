@class TPSSizes;

@interface TPSAssetSizes : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TPSSizes *tip;
@property (retain, nonatomic) TPSSizes *tipIntro;
@property (retain, nonatomic) TPSSizes *collectionFeatured;

+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
