@class NSString, PFPosterEditConfiguration;

@interface PFPosterMedia : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mediaType;
@property (retain, nonatomic) NSString *subpath;
@property (retain, nonatomic) NSString *assetUUID;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0;

@end
