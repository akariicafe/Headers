@class NSString, BSAbsoluteMachTimer;
@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer> {
    BSAbsoluteMachTimer *_timer;
    BOOL _done;
}

@property (weak, nonatomic) id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_timerFired;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)_invalidateTimer;
- (void)dealloc;
- (void)_requestEndOfSuppression;
- (void)_startTimer;
- (id)init;
- (void).cxx_destruct;

@end
