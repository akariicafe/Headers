@class NSString, NSURL;

@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *payloadURL;
@property (readonly, nonatomic) NSURL *storeURL;

+ (id)handleRequest:(id)a0;
+ (id)_openApplicationService;
+ (BOOL)canHandleBundleID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 bundleID:(id)a1 payloadURL:(id)a2 storeURL:(id)a3;

@end
