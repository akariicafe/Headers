@class NSString, NSURL, TPSAssetSizes;

@interface TPSMetadata : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL contextualTipsInactive;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSURL *assetBaseURL;
@property (copy, nonatomic) NSString *contentMapHash;
@property (copy, nonatomic) TPSAssetSizes *assetSizes;

+ (id)metadataFromDictionary:(id)a0;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
