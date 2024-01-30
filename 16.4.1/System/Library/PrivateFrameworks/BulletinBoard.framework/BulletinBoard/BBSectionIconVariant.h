@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {
    id _imageInfo;
    long long _imageInfoType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long format;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *systemImageName;
@property (nonatomic, getter=isPrecomposed) BOOL precomposed;

+ (id)variantWithFormat:(long long)a0 applicationIdentifier:(id)a1;
+ (id)variantWithFormat:(long long)a0 imageData:(id)a1;
+ (id)variantWithFormat:(long long)a0 systemImageName:(id)a1;
+ (id)variantWithFormat:(long long)a0 imageName:(id)a1 inBundleAtPath:(id)a2;
+ (id)variantWithFormat:(long long)a0 imagePath:(id)a1;
+ (id)variantWithFormat:(long long)a0 imageName:(id)a1 inBundle:(id)a2;

- (id)_processImageInfo:(id)a0 imageInfoType:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithFormat:(long long)a0 imageInfo:(id)a1 imageInfoType:(long long)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setImageInfo:(id)a0 ofType:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
