@class NSString, NSURL;

@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *payloadURL;
@property (readonly, nonatomic) NSURL *storeURL;

+ (id)_openApplicationService;
+ (BOOL)canHandleBundleID:(id)a0;
+ (id)handleRequest:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 bundleID:(id)a1 payloadURL:(id)a2 storeURL:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
