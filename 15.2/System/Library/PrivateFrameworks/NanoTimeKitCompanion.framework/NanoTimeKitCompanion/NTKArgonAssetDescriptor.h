@class NSURL, NSString;

@interface NTKArgonAssetDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) BOOL unlinkOnDealloc;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSURL *fileURL;

+ (id)defaultBaseURL;
+ (id)assetDescriptorForBundle:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithFileName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFileName:(id)a0 baseURL:(id)a1;

@end
