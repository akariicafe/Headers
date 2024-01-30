@class NSURL, NSString;

@interface TRISignedAssetURL : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *signature;

+ (id)assetURLWithUrl:(id)a0 signature:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUrl:(id)a0 signature:(id)a1;
- (BOOL)isEqualToAssetURL:(id)a0;
- (id)copyWithReplacementUrl:(id)a0;
- (id)copyWithReplacementSignature:(id)a0;

@end
