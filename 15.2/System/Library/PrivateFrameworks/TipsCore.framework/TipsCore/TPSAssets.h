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

+ (id)na_identity;
+ (id)assetsFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasImage;
- (unsigned long long)hash;
- (BOOL)hasVideo;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)imageIdentifier;

@end
