@class NSString, NSNumber, NSData;

@interface ASDJobAsset : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *assetURL;
@property (copy, nonatomic) NSNumber *bytesTotal;
@property (copy, nonatomic) NSData *dPInfo;
@property (copy, nonatomic) NSNumber *expectedDiskspace;
@property (copy, nonatomic) NSData *hashArrayData;
@property (copy, nonatomic) NSNumber *hashType;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (nonatomic) BOOL isExternal;
@property (nonatomic) BOOL isLocallyCacheable;
@property (nonatomic) BOOL isZipStreamable;
@property (copy, nonatomic) NSNumber *numberOfBytesToHash;
@property (copy, nonatomic) NSData *sinfs;
@property (copy, nonatomic) NSString *storeDownloadKey;
@property (copy, nonatomic) NSString *variantID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
