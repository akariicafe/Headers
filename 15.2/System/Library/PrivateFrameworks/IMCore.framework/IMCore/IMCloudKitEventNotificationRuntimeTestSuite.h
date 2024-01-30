@class NSString, IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler>

@property BOOL shouldTearDown;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runTestsIfNeeded;

- (void)tearDown;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;

@end
