@class NSString;

@interface SHAttribution : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSString *containingAppBundleIdentifier;

+ (BOOL)requiresAttributionForBundlerIdentifier:(id)a0;
+ (id)productNameForBundleIdentifier:(id)a0;
+ (id)attributionExceptionPlist;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)configureAttributionForTask:(struct __SecTask { } *)a0;
- (void)configureAttributionForConnection:(id)a0;

@end
