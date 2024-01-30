@class NSData;

@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *hlsPlaylist;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 expirationDate:(id)a1 requiredHTTPHeaders:(id)a2;
- (id)initWithURL:(id)a0 expirationDate:(id)a1 requiredHTTPHeaders:(id)a2 hlsPlaylist:(id)a3;

@end
