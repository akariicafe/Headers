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

- (void)cancelPauseTimeout;
- (void)beginFieldDetectTimeout;
- (BOOL)isDisconnectTimerValid;
- (void)cancelMfaTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (void)beginDisconnectTimeout;
- (void)cancelDisconnectTimeout;
- (BOOL)isRetryConnectionTimerValid;
- (void)cancelRetryConnectionTimeout;
- (void)cancelAllTimers;
- (BOOL)isMfaTimerValid;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)dealloc;
- (void)beginMfaTimeout;
- (void)beginTagReadTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (BOOL)isPauseTimerValid;
- (void)beginRetryConnectionTimeout;
- (BOOL)isWaitForMachineStartTimerValid;
- (void)beginPauseTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (BOOL)isFieldDetectTimerValid;
- (void)cancelFieldDetectTimeout;
- (BOOL)isUserAcceptanceTimerValid;
- (void)beginWaitForMachineStartTimeout;
- (void)beginUserAcceptanceTimeout;
- (void).cxx_destruct;
- (BOOL)isTagReadTimerValid;
- (void)cancelUserAcceptanceTimeout;
- (id)initWithQueue:(id)a0 delegate:(id)a1;

@end
