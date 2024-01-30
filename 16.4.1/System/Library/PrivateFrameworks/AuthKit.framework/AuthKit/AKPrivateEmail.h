@class NSString;

@interface AKPrivateEmail : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *clientAppBundleId;
@property (readonly, copy, nonatomic) NSString *privateEmailAddress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 forKey:(id)a1;
- (id)initWithAddress:(id)a0 forKey:(id)a1 withBundleId:(id)a2;

@end
