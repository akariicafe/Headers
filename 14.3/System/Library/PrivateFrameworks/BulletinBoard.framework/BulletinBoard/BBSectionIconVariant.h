@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long format;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, getter=isPrecomposed) BOOL precomposed;

+ (id)variantWithFormat:(long long)a0 imageName:(id)a1 inBundle:(id)a2;
+ (id)_variantWithFormat:(long long)a0;
+ (id)variantWithFormat:(long long)a0 imageData:(id)a1;
+ (id)variantWithFormat:(long long)a0 imagePath:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
