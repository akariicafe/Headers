@class NSString;

@interface PHACachingCPAnalyticsPropertiesTask : NSObject <PHATask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ageRangeDescriptionFromBirthday:(id)a0;
+ (id)_fetchDemographicsSummaryWithLoggingConnection:(id)a0;
+ (id)_fetchLibrarySummaryForPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (id)_genderDescriptionFromGivenName:(id)a0;
+ (BOOL)_hasAppleMusicSubscriptionWithLoggingConnection:(id)a0;
+ (id)_meContactWithLoggingConnection:(id)a0;

- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_buildPropertyCacheForPhotoLibrary:(id)a0 loggingConnection:(id)a1;

@end
