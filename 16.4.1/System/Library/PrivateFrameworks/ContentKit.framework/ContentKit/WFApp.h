@class NSString;

@interface WFApp : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)a0 name:(id)a1;

- (id)bundleURL;
- (BOOL)isFrontmost;
- (void)encodeWithCoder:(id)a0;
- (id)processIdentifier;
- (id)icon;
- (id)initWithCoder:(id)a0;
- (id)launchDate;
- (id)initWithRecord:(id)a0;
- (BOOL)isHidden;
- (BOOL)isRunning;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;

@end
