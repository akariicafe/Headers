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

- (void)_startTimer;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)_timerFired;
- (void)_invalidateTimer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_requestEndOfSuppression;

@end
