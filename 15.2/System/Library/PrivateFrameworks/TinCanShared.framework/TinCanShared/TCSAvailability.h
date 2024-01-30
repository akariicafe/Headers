@class NSUserDefaults, NPSManager;

@interface TCSAvailability : NSObject {
    NSUserDefaults *_tinCanDefaults;
    NPSManager *_npsManager;
}

@property (nonatomic) BOOL shouldObserveFriendListDefaultChanges;
@property (nonatomic) BOOL shouldObserveUnavailabilityDefaultChanges;
@property (nonatomic) BOOL shouldShowStatusIndicator;

+ (id)sharedInstance;
+ (BOOL)isUserAvailable;
+ (void)setUserAvailable:(BOOL)a0;
+ (BOOL)shouldShowWalkieTalkieStatusIndicator;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_handleDeviceFirstUnlock;
- (BOOL)_calculateShouldShowStatusIndicator;
- (void)_postNotificationName:(id)a0;
- (BOOL)_isUserUnavailable;
- (void)_setUserUnavailable:(BOOL)a0;
- (id)_unavailabilityText:(BOOL)a0;
- (BOOL)_hasConnectivity;

@end
