@class NSString;

@interface BLTWatchKitAppDefinition : NSObject

@property (readonly, nonatomic) NSString *containerBundleID;
@property (readonly, nonatomic) NSString *watchKitAppBundleID;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL runsIndependently;

- (void).cxx_destruct;
- (id)initWithContainerBundleID:(id)a0 watchKitAppBundleID:(id)a1 isInstalled:(BOOL)a2 runsIndependently:(BOOL)a3;

@end
