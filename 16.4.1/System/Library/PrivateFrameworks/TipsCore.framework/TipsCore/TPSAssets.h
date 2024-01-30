@class NSString, TPSGradient, NSURL;

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *posterId;
@property (copy, nonatomic) NSString *thumbnailId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *fallbackId;
@property (copy, nonatomic) NSString *symbolId;
@property (copy, nonatomic) NSString *symbolColor;
@property (copy, nonatomic) NSString *symbolSize;
@property (copy, nonatomic) TPSGradient *gradient;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *alt;
@property (copy, nonatomic) NSString *imageId;

+ (id)assetsFromDictionary:(id)a0;
+ (id)na_identity;

- (id)identifierForKey:(id)a0 dictionary:(id)a1;
- (BOOL)hasImage;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithSymbolId:(id)a0 symbolColor:(id)a1 symbolSize:(id)a2 alt:(id)a3 gradientColorStrings:(id)a4;
- (unsigned long long)hash;
- (BOOL)hasVideo;
- (id)imageIdentifier;
- (void).cxx_destruct;

@end
