@class NSUserDefaults, NPSManager;

@interface TCSAvailability : NSObject {
    NSUserDefaults *_tinCanDefaults;
    NPSManager *_npsManager;
}

@property (nonatomic) BOOL shouldObserveUnavailabilityDefaultChanges;
@property (nonatomic) BOOL shouldShowStatusIndicator;

+ (id)sharedInstance;
+ (BOOL)isUserAvailable;
+ (void)setUserAvailable:(BOOL)a0;
+ (BOOL)shouldShowWalkieTalkieStatusIndicator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_postNotificationName:(id)a0;
- (void)_handleDeviceFirstUnlock;
- (BOOL)_calculateShouldShowStatusIndicator;
- (BOOL)_isUserUnavailable;
- (void)_setUserUnavailable:(BOOL)a0;
- (id)_unavailabilityText:(BOOL)a0;

@end
