@class NSURL, NSDictionary, NSDate;

@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *url;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSDictionary *requiredHTTPHeaders;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 expirationDate:(id)a1 requiredHTTPHeaders:(id)a2;

@end
