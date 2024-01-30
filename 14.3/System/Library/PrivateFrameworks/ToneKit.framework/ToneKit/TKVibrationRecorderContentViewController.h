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

- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_cancelButtonTapped:(id)a0;
- (void)_saveButtonTapped:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)applicationWillSuspend;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)_handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)_cleanUpVibrationNameAlertController;
- (void)vibrationRecorderView:(id)a0 buttonTappedWithIdentifier:(int)a1;
- (void)_stopRecordingOrPlayingForApplicationSuspension;
- (void)_finishedWithRecorder;
- (void)_vibrationNameTextFieldContentsDidChange:(id)a0;
- (void)_cancelButtonInAlertTapped:(id)a0;
- (void)_saveButtonInAlertTapped:(id)a0;
- (void)_updateStateSaveButtonInAlert;
- (void)_stopVibrating;
- (void)_storeVibrationComponentOfTypePause:(BOOL)a0;
- (id)_indefiniteVibrationPattern;
- (void)_startVibratingWithVibrationPattern:(id)a0;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidEnterRecordingMode;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)a0;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)a0;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)a0;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)a0;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)a0;
- (void)vibrationRecorderView:(id)a0 didExitRecordingModeWithContextObject:(id)a1;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)a0;
- (id)initWithVibratorController:(id)a0;

@end
