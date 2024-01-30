@class NSString, BSTimer;
@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer> {
    BSTimer *_timer;
    BOOL _done;
}

@property (weak, nonatomic) id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_timerFired;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (id)init;
- (void)_requestEndOfSuppression;
- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)dealloc;
- (void)_startTimer;

@end
