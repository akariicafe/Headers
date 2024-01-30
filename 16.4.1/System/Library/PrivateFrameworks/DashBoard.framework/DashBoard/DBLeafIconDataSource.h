@class DBApplicationInfo, NSString, FBSApplicationDataStore, CARSessionConfiguration;

@interface DBLeafIconDataSource : NSObject <SBLeafIconDataSource>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) DBApplicationInfo *applicationInfo;
@property (retain, nonatomic) CARSessionConfiguration *sessionConfiguration;
@property (retain, nonatomic) FBSApplicationDataStore *dataStore;
@property (copy, nonatomic) NSString *cachedBadgeValue;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceForApplicationInfo:(id)a0;
+ (id)dataSourceForNowPlayingIcon;
+ (id)dataSourceForOEMIconWithSessionConfiguration:(id)a0;

- (BOOL)iconCompleteUninstall:(id)a0;
- (long long)labelAccessoryTypeForIcon:(id)a0;
- (id)icon:(id)a0 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (BOOL)iconCanTightenLabel:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (unsigned long long)priorityForIcon:(id)a0;
- (long long)progressStateForIcon:(id)a0;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (BOOL)icon:(id)a0 launchFromLocation:(id)a1 context:(id)a2;
- (BOOL)iconCanTruncateLabel:(id)a0;
- (double)progressPercentForIcon:(id)a0;
- (BOOL)isProgressPausedForIcon:(id)a0;
- (BOOL)iconSupportsUninstall:(id)a0;
- (BOOL)iconAllowsLaunch:(id)a0;
- (id)badgeNumberOrStringForIcon:(id)a0;
- (void).cxx_destruct;
- (BOOL)iconDisallowsLaunchForObscuredReason:(id)a0;
- (long long)accessoryTypeForIcon:(id)a0;
- (id)formattedAccessoryStringForIcon:(id)a0;
- (id)icon:(id)a0 defaultImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)_initWithIdentifier:(id)a0 applicationInfo:(id)a1 sessionConfiguration:(id)a2;
- (BOOL)_stringIsDigits:(id)a0;
- (void)invalidateBadgeValue;

@end
