@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hardwareModel;
- (id)app;
- (id)screenHeight;
- (id)userAgent;
- (id)osVersion;
- (BOOL)isAnonymous;
- (id)os;
- (id)pageUrl;
- (id)screenWidth;
- (id)dsId;
- (id)appVersion;
- (id)connectionType;
- (id)hostApp;
- (id)userType;
- (id)pixelRatio;
- (id)cookies;
- (id)hardwareFamily;
- (id)osBuildNumber;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;
- (id)_diskUsage;

@end
