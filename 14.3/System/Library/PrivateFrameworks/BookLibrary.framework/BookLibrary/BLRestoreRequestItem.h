@class NSDictionary;

@interface BLRestoreRequestItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *downloadDictionary;
@property (retain, nonatomic) NSDictionary *assetDictionary;

+ (id)_downloadDictionaryWithDownloadMetadata:(id)a0 additionalDownloadPropertiesDictionary:(id)a1;
+ (id)_assetDictionaryWithDownloadMetadata:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDownloadDictionary:(id)a0 assetDictionary:(id)a1;
- (id)initWithDownloadMetadataDictionary:(id)a0 additionalDownloadPropertiesDictionary:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
