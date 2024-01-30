@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMIPeakPowerPressureMonitor : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _osPeakPowerPressureLevelNotificationToken;
}

@property (readonly) long long peakPowerPressureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)shortDescription;
+ (id)logCategory;

@end
