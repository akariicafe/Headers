@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak, nonatomic) id<MTEnvironmentDelegate> delegate;

- (id)osVersion;
- (id)connectionType;
- (id)userAgent;
- (id)environmentDataCenter;
- (id)appVersion;
- (id)dsId;
- (id)hardwareModel;
- (void).cxx_destruct;
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
- (id)hostAppVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)hardwareFamily;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
