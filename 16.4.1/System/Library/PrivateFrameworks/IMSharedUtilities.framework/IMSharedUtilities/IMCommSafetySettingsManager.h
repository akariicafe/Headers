@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMCommSafetySettingsManager : NSObject <IMSystemMonitorListener> {
    int _notificationToken;
}

@property (nonatomic) BOOL checkSensitivePhotos;
@property (nonatomic) BOOL checkSensitivePhotosAnalyticsEnabled;
@property (nonatomic) BOOL shouldNotifyParentAboutSensitivePhotos;
@property (nonatomic) BOOL childIsYoungAgeGroup;
@property (nonatomic) long long protectedChildAge;
@property (nonatomic) BOOL hasConnected;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableArray *parents;

+ (id)sharedManager;

- (void)systemDidLeaveFirstDataProtectionLock;
- (void)dealloc;
- (void)_connectToFamilyCircle:(id /* block */)a0;
- (void)_updateSettings;
- (id)init;
- (void).cxx_destruct;

@end
