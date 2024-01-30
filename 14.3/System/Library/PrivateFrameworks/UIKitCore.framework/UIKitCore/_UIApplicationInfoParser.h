@class NSString, NSArray, NSDictionary;

@interface _UIApplicationInfoParser : NSObject {
    BOOL _isYukonLinked;
}

@property (readonly, nonatomic) long long requestedStatusBarStyle;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) long long launchingInterfaceOrientationForSpringBoard;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) int ignoredOverrides;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) unsigned long long viewControllerBasedStatusBarAppearance;
@property (readonly, copy, nonatomic) NSString *launchImageFile;
@property (readonly, copy, nonatomic) NSString *keyColorAssetName;
@property (readonly, nonatomic) BOOL isExitsOnSuspend;
@property (readonly, nonatomic) BOOL canChangeBackgroundStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) BOOL statusBarHiddenWhenVerticallyCompact;
@property (readonly, nonatomic) BOOL systemWindowsSecure;
@property (readonly, nonatomic) BOOL optOutOfRTL;
@property (readonly, nonatomic) BOOL disableLayoutAwareShortcuts;
@property (readonly, nonatomic) BOOL requiresHighResolution;
@property (readonly, nonatomic) BOOL fakingRequiresHighResolution;
@property (readonly, nonatomic) BOOL supportsMultiwindow;
@property (readonly, copy, nonatomic) NSArray *canvasDefinitions;
@property (readonly, copy, nonatomic) NSDictionary *sceneConfigurations;
@property (readonly, nonatomic) BOOL supportedOnLockScreen;
@property (readonly, nonatomic) long long supportedUserInterfaceStyle;
@property (readonly, nonatomic) BOOL supportsIndirectInputEvents;
@property (readonly, copy, nonatomic) NSArray *deviceFamilies;

+ (id)mainBundleInfoParser;

- (void).cxx_destruct;
- (id)initWithApplicationProxy:(id)a0;
- (id)_initWithBundle:(id)a0;
- (id)_initWithApplicationPlistData:(id)a0;
- (BOOL)_isLinkedOnOrAfterYukon;
- (void)_computeSupportedUserInterfaceStyleFromInfo:(id)a0;
- (void)_computeSupportedInterfaceOrientationsWithInfo:(id)a0;

@end
