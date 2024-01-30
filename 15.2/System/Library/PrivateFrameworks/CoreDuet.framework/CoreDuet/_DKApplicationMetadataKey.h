@interface _DKApplicationMetadataKey : NSObject

+ (id)launchReason;
+ (id)dyldPlatform;
+ (id)isNativeArchitecture;
+ (id)backboardState;
+ (id)processIdentifier;
+ (id)extensionHostIdentifier;
+ (id)extensionContainingBundleIdentifier;

@end
