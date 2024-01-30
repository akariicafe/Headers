@protocol MNHapticControllerDelegate;

@interface MNHapticResourceController : NSObject {
    int _vibratorNotificationToken;
    BOOL _isVibrating;
}

@property (weak, nonatomic) id<MNHapticControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL vibrating;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_registerForObservation;
- (void)stopVibrating;
- (BOOL)triggerVibration;
- (void)_updateVibratingFromState:(unsigned long long)a0;
- (BOOL)playHapticSound:(unsigned long long)a0 andReport:(out id *)a1;

@end
