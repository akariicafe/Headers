@interface _DKApplicationMetadataKey : NSObject

+ (id)launchReason;
+ (id)exactBundleVersion;
+ (id)processIdentifier;
+ (id)extensionContainingBundleIdentifier;
+ (id)dyldPlatform;
+ (id)shortVersionString;
+ (id)backboardState;
+ (id)isNativeArchitecture;
+ (id)extensionHostIdentifier;

@end
