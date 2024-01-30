@class NSString, NSURL;

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *posterId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *fallbackId;
@property (nonatomic) BOOL skipViewMode;
@property (nonatomic) long long imageExtensionType;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *alt;
@property (copy, nonatomic) NSString *imageId;

+ (id)classSet;
+ (id)na_identity;
+ (id)assetsFromDictionary:(id)a0;

- (BOOL)hasImage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasVideo;
- (id)imageIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
