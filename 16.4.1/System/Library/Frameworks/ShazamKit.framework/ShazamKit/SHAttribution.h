@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSString *containingAppBundleIdentifier;

+ (id)productNameForBundleIdentifier:(id)a0;
+ (id)mediaLibraryAttributionExceptionPlist;
+ (BOOL)requiresMediaLibraryAttributionForBundleIdentifier:(id)a0;
+ (BOOL)requiresStaticSensorActivityAttributionForBundleIdentifier:(id)a0;
+ (id)staticSensorActivityAttributionExceptionPlist;

- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)configureAttributionForConnection:(id)a0;
- (void)configureAttributionForTask:(struct __SecTask { } *)a0;

@end
