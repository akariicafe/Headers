@class NSString;

@interface NTKFaceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long faceStyle;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFaceStyle:(long long)a0;
- (BOOL)isAvailableForDevice:(id)a0;
- (id)_initWithFaceStyle:(long long)a0 bundleIdentifier:(id)a1;

@end
