@class NSString;

@interface MTEnvironmentUIKitDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)osVersion;
- (id)connectionType;
- (id)userAgent;
- (id)appVersion;
- (id)dsId;
- (id)hardwareModel;
- (id)screenWidth;
- (id)pageUrl;
- (id)userType;
- (id)os;
- (id)hostApp;
- (id)screenHeight;
- (id)cookies;
- (id)app;
- (id)pixelRatio;
- (BOOL)isAnonymous;
- (id)osBuildNumber;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)hardwareFamily;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;
- (id)_diskUsage;

@end
