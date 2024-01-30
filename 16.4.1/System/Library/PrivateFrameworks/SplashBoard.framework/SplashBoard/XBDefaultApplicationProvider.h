@class NSString;

@interface XBDefaultApplicationProvider : NSObject <XBApplicationProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)splashBoardSystemApplications;
- (id)allSplashBoardApplications;
- (id)allInstalledApplications;
- (id)recentlyUsedBundleIDs;
- (id)_allApplicationsFilteredBySystem:(BOOL)a0 bySplashBoard:(BOOL)a1;

@end
