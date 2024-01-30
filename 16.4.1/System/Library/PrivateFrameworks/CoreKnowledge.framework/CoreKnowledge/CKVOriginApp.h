@class NSString;

@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *universalAppId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isEqualToApp:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppId:(id)a0;
- (BOOL)isKnownApp;

@end
