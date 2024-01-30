@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak, nonatomic) id<MTEnvironmentDelegate> delegate;

- (id)hardwareModel;
- (id)app;
- (id)screenHeight;
- (id)userAgent;
- (id)osVersion;
- (BOOL)isAnonymous;
- (id)environmentDataCenter;
- (id)os;
- (id)pageUrl;
- (id)screenWidth;
- (id)dsId;
- (id)appVersion;
- (void).cxx_destruct;
- (id)connectionType;
- (id)hostApp;
- (id)pixelRatio;
- (id)cookies;
- (id)hardwareFamily;
- (id)osBuildNumber;
- (id)hostAppVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
