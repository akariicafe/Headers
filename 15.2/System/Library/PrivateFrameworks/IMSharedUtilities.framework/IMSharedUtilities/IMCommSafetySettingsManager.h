@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMCommSafetySettingsManager : NSObject {
    int _notificationToken;
}

@property (nonatomic) BOOL checkSensitivePhotos;
@property (nonatomic) BOOL shouldNotifyParentAboutSensitivePhotos;
@property (nonatomic) BOOL childIsYoungAgeGroup;
@property (nonatomic) long long protectedChildAge;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableArray *parents;

+ (id)sharedManager;

- (BOOL)__im_ff_commSafetyInternalEnabled;
- (void)_connectToFamilyCircle:(id /* block */)a0;
- (void)_updateSettings;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
