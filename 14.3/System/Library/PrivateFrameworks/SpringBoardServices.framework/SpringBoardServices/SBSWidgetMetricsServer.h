@class NSString, BSServiceConnection;

@interface SBSWidgetMetricsServer : NSObject <SBSWidgetMetricsProviding> {
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkOutServerInstance;
+ (void)returnServerInstance:(id)a0;

- (id)init;
- (void)_createConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_init;
- (id)systemMetricsForWidget:(id)a0;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;

@end
