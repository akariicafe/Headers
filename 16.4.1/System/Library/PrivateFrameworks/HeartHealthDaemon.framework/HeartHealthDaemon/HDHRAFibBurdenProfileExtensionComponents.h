@class HDAnalyticsDailyEventManager, HDHRAFibBurdenNotificationManager, HDHRAFibBurdenRescindedNotificationManager, HKHRAFibBurdenAnalyzer, HKFeatureStatusManager, HKHRAFibBurdenSevenDayAnalysisScheduler;
@protocol HDFeatureAvailabilityExtension;

@interface HDHRAFibBurdenProfileExtensionComponents : NSObject

@property (retain, nonatomic) id<HDFeatureAvailabilityExtension> featureAvailabilityManager;
@property (retain, nonatomic) HKFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HDAnalyticsDailyEventManager *dailyAnalyticsEventManager;
@property (nonatomic) unsigned long long stateHandlerHandle;
@property (retain, nonatomic) HDHRAFibBurdenNotificationManager *notificationManager;
@property (retain, nonatomic) HDHRAFibBurdenRescindedNotificationManager *notificationsRescindedManager;
@property (retain, nonatomic) HKHRAFibBurdenSevenDayAnalysisScheduler *sevenDayAnalysisScheduler;
@property (retain, nonatomic) HKHRAFibBurdenAnalyzer *analyzer;

+ (id)makeComponentsForProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1;

- (id)initWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
