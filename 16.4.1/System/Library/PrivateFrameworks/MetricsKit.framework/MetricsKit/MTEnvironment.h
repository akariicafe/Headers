@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak, nonatomic) id<MTEnvironmentDelegate> delegate;

- (id)userAgent;
- (id)hardwareModel;
- (id)screenHeight;
- (id)appVersion;
- (id)screenWidth;
- (id)connectionType;
- (id)pageUrl;
- (id)app;
- (id)environmentDataCenter;
- (BOOL)isAnonymous;
- (id)osVersion;
- (id)os;
- (id)cookies;
- (void).cxx_destruct;
- (id)pixelRatio;
- (id)hostApp;
- (id)dsId;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)hardwareFamily;
- (id)hostAppVersion;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
