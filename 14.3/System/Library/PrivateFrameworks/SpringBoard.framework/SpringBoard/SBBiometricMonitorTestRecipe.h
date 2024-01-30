@class NSString, SBBiometricMonitorUI, SBBiometricMonitorTestRecipeDummyDataSource;

@interface SBBiometricMonitorTestRecipe : NSObject <SBTestRecipe> {
    SBBiometricMonitorUI *_monitorUI;
    SBBiometricMonitorTestRecipeDummyDataSource *_dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

@end
