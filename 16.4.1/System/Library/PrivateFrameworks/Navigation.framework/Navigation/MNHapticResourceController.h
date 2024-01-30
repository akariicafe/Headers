@protocol MNHapticControllerDelegate;

@interface MNHapticResourceController : NSObject {
    BOOL _isVibrating;
}

@property (weak, nonatomic) id<MNHapticControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL vibrating;

- (void).cxx_destruct;
- (BOOL)playHapticSound:(unsigned long long)a0 andReport:(out id *)a1;
- (void)stopVibrating;
- (BOOL)triggerVibration;

@end
