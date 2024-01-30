@class NSString, TKVibrationRecorderContentViewController;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration> {
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;

- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_canShowWhileLocked;
- (id)initWithVibratorController:(id)a0;

@end
