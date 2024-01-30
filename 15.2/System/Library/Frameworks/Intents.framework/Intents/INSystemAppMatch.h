@class NSString;

@interface INSystemAppMatch : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifierForCurrentPlatform;
@property (readonly, nonatomic) BOOL appIsUnavailableOnCurrentPlatform;

+ (id)matchWithBundleIdentifier:(id)a0;
+ (id)appExistsButIsUnavailableOnCurrentPlatform;

- (id)initWithBundleIdentifier:(id)a0 appIsUnavailableOnCurrentPlatform:(BOOL)a1;
- (void).cxx_destruct;

@end
