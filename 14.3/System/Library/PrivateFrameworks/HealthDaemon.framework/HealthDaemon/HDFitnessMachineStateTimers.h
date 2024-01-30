@class HDFitnessMachineStateTimer, NSObject;
@protocol OS_dispatch_queue, HDFitnessMachineStateTimersDelegate;

@interface HDFitnessMachineStateTimers : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDFitnessMachineStateTimer *fieldDetectTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *tagReadTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *machineIdentityVerificationTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *userAcceptanceTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *waitForMachineStartTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *pauseTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *disconnectTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *retryConnectionTimer;
@property (retain, nonatomic) HDFitnessMachineStateTimer *mfaTimer;
@property (weak, nonatomic) id<HDFitnessMachineStateTimersDelegate> delegate;

- (void)beginMfaTimeout;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)cancelUserAcceptanceTimeout;
- (void).cxx_destruct;
- (BOOL)isFieldDetectTimerValid;
- (void)dealloc;
- (void)beginPauseTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)beginFieldDetectTimeout;
- (void)cancelAllTimers;
- (void)cancelTagReadTimeout;
- (void)beginTagReadTimeout;
- (BOOL)isTagReadTimerValid;
- (void)cancelDisconnectTimeout;
- (BOOL)isPauseTimerValid;
- (void)cancelRetryConnectionTimeout;
- (void)cancelPauseTimeout;
- (void)cancelMfaTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (BOOL)isUserAcceptanceTimerValid;
- (BOOL)isRetryConnectionTimerValid;
- (BOOL)isDisconnectTimerValid;
- (void)cancelMachineIdentityVerificationTimeout;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)beginUserAcceptanceTimeout;
- (void)cancelFieldDetectTimeout;
- (BOOL)isMfaTimerValid;
- (void)beginMachineIdentityVerificationTimeout;
- (void)beginRetryConnectionTimeout;
- (void)beginDisconnectTimeout;
- (BOOL)isWaitForMachineStartTimerValid;

@end
