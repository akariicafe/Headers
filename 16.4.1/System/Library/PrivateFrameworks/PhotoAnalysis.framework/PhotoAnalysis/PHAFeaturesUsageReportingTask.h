@class NSString;

@interface PHAFeaturesUsageReportingTask : NSObject <PHATask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateFormatter;
+ (void)_reportCameraSharingSettingsWithPhotoLibrary:(id)a0 andAnalytics:(id)a1;
+ (void)updateLastReportSettings;
+ (BOOL)shouldReportSettingsWithLoggingConnection:(id)a0;

- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)_libraryScopedWorkerFeaturesUsageForLibrary:(id)a0 error:(id *)a1;
- (BOOL)recordFeatureUsageFromCounts:(id)a0 forPhotoLibrary:(id)a1 error:(id *)a2;
- (id)_libraryScopedWorkerFeaturesUsageURLForPhotoLibrary:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
