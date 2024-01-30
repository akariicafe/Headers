@class NSURL, NSDictionary, NSDate;

@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *url;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSDictionary *requiredHTTPHeaders;

- (id)initWithURL:(id)a0 expirationDate:(id)a1 requiredHTTPHeaders:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
