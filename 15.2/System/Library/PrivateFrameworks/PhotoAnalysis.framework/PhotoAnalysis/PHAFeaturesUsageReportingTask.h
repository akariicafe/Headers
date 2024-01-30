@class NSString;

@interface PHAFeaturesUsageReportingTask : NSObject <PHATask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateFormatter;

- (BOOL)recordFeatureUsageFromCounts:(id)a0 forPhotoLibrary:(id)a1 error:(id *)a2;
- (id)_libraryScopedWorkerFeaturesUsageForLibrary:(id)a0 error:(id *)a1;
- (id)_libraryScopedWorkerFeaturesUsageURLForPhotoLibrary:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;

@end
