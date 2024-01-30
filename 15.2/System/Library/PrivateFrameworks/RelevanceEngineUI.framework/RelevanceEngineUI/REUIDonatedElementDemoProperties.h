@class NSString, UIImage, INIntent;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {
    NSString *_demoBundleIdentifier;
    INIntent *_demoIntent;
    NSString *_demoAppName;
    UIImage *_demoAppIcon;
}

+ (id)createWithIntent:(id)a0 bundleIdentifier:(id)a1 appName:(id)a2 appIcon:(id)a3;

- (id)intent;
- (id)appName;
- (id)appIcon;
- (void).cxx_destruct;
- (id)bundleIdentifier;

@end
