@class DNDApplicationIdentifier, NSString, NSURL;

@interface DNDAppInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSURL *storeIconURL;
@property (readonly, copy, nonatomic) NSURL *cachedIconURL;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSource:(long long)a0 applicationIdentifier:(id)a1 displayName:(id)a2 storeIconURL:(id)a3 cachedIconURL:(id)a4;
- (id)_initWithAppInfo:(id)a0;

@end
