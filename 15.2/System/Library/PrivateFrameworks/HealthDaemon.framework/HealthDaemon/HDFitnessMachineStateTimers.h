@class HDFitnessMachineStateTimer, NSObject;
@protocol OS_dispatch_queue, HDFitnessMachineStateTimersDelegate;

@interface HDFitnessMachineStateTimers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property (weak, nonatomic) id<HDFitnessMachineStateTimersDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (void)cancelAllTimers;
- (void)beginRetryConnectionTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)cancelPauseTimeout;
- (void)beginPauseTimeout;
- (void)cancelMfaTimeout;
- (void)beginDisconnectTimeout;
- (void)cancelDisconnectTimeout;
- (BOOL)isDisconnectTimerValid;
- (BOOL)isRetryConnectionTimerValid;
- (void)beginMfaTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelFieldDetectTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)beginFieldDetectTimeout;
- (BOOL)isFieldDetectTimerValid;
- (void)beginTagReadTimeout;
- (BOOL)isTagReadTimerValid;
- (void)beginMachineIdentityVerificationTimeout;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)beginUserAcceptanceTimeout;
- (BOOL)isUserAcceptanceTimerValid;
- (BOOL)isWaitForMachineStartTimerValid;
- (BOOL)isPauseTimerValid;
- (BOOL)isMfaTimerValid;

@end
