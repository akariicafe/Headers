@class NSString, NSArray, _UIApplicationInfoParser;

@interface _UIApplicationInfo : FBSApplicationInfo {
    long long _launchingInterfaceOrientation;
    _UIApplicationInfoParser *_plistParser;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
}

@property (readonly, nonatomic) unsigned long long ignoredOverrides;
@property (readonly, nonatomic) unsigned long long viewControllerBasedStatusBarAppearance;
@property (readonly, nonatomic) BOOL systemWindowsSecure;
@property (readonly, nonatomic) BOOL optOutOfRTL;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) BOOL requiresHighResolution;
@property (readonly, nonatomic) BOOL fakingRequiresHighResolution;
@property (readonly, nonatomic) long long requestedStatusBarStyle;
@property (readonly, nonatomic) BOOL canChangeBackgroundStyle;
@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) BOOL statusBarHiddenWhenVerticallyCompact;
@property (readonly, copy, nonatomic) NSString *launchImageFile;
@property (readonly, copy, nonatomic) NSString *keyColorAssetName;
@property (readonly, nonatomic) long long supportedUserInterfaceStyle;
@property (readonly, nonatomic) NSArray *folderNames;
@property (readonly, nonatomic) NSString *fallbackFolderName;

+ (id)_genreNameForID:(long long)a0;
+ (id)_localizedFolderNameForName:(id)a0;

- (void)_loadFromProxy:(id)a0;
- (void).cxx_destruct;
- (long long)_launchingInterfaceOrientation;
- (void)_lock_loadFolderNamesIfNecessary;
- (BOOL)statusBarForcedHiddenForInterfaceOrientation:(long long)a0 onDisplay:(id)a1;
- (BOOL)statusBarForcedHiddenForInterfaceOrientation:(long long)a0 onDisplay:(id)a1 withUserInterfaceIdiom:(long long)a2;
- (BOOL)statusBarHiddenForInterfaceOrientation:(long long)a0 onDisplay:(id)a1;
- (BOOL)statusBarHiddenForInterfaceOrientation:(long long)a0 onDisplay:(id)a1 withUserInterfaceIdiom:(long long)a2;

@end
