@class TKVibratorController, NSString, TLVibrationPattern, TKVibrationRecorderViewController, UIAlertAction, NSDictionary, UITextField, UIAlertController, UIBarButtonItem, TKVibrationRecorderView;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate> {
    int _mode;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    double _currentVibrationComponentDidStartTimeStamp;
    BOOL _isWaitingForEndOfCurrentVibrationComponent;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
}

@property (weak, nonatomic) id<TKVibrationRecorderViewControllerDelegate> delegate;
@property (weak, nonatomic) TKVibrationRecorderViewController *parentVibrationRecorderViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_cancelButtonTapped:(id)a0;
- (void)applicationWillSuspend;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_saveButtonTapped:(id)a0;
- (void)_handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)_accessibilityDidExitReplayMode;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)a0;
- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)a0;
- (void)_cancelButtonInAlertTapped:(id)a0;
- (void)_cleanUpVibrationNameAlertController;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_finishedWithRecorder;
- (id)_indefiniteVibrationPattern;
- (void)_saveButtonInAlertTapped:(id)a0;
- (void)_startVibratingWithVibrationPattern:(id)a0;
- (void)_stopRecordingOrPlayingForApplicationSuspension;
- (void)_stopVibrating;
- (void)_storeVibrationComponentOfTypePause:(BOOL)a0;
- (void)_updateStateSaveButtonInAlert;
- (void)_vibrationNameTextFieldContentsDidChange:(id)a0;
- (id)initWithVibratorController:(id)a0;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)a0;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)a0;
- (void)vibrationRecorderView:(id)a0 buttonTappedWithIdentifier:(int)a1;
- (void)vibrationRecorderView:(id)a0 didExitRecordingModeWithContextObject:(id)a1;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)a0;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)a0;

@end
