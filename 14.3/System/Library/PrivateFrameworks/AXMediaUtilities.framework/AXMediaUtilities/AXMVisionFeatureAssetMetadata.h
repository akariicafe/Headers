@class NSURL, NSString, NSDate;

@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *assetURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *localizedTypeDescription;
@property (retain, nonatomic) NSString *TIFFImageDescription;
@property (retain, nonatomic) NSString *IPTCCaptionAbstract;
@property (retain, nonatomic) NSString *EXIFUserComment;
@property (retain, nonatomic) NSString *PNGImageDescription;
@property (readonly, nonatomic) NSURL *url;

+ (id)assetMetadataFromURL:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
