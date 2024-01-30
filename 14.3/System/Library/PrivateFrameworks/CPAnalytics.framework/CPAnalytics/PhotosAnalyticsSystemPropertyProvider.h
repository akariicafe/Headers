@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_percentageOfFreeSpaceOnDevice;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)_lowPowerModeEnabled;
- (id)_osVersion;
- (void)registerSystemProperties:(id)a0;
- (id)_process;
- (id)_deviceFreeSpaceDescription;
- (id)_deviceModel;

@end
