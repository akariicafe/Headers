@class NSString, UIImage;

@interface CSLPRFApp : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) BOOL supportsAlwaysOnDisplay;

+ (id)appWithBundleID:(id)a0 name:(id)a1 icon:(id)a2 sdkVersion:(id)a3 supportsAlwaysOnDisplay:(BOOL)a4;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 name:(id)a1 icon:(id)a2 sdkVersion:(id)a3 supportsAlwaysOnDisplay:(BOOL)a4;

@end
