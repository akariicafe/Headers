@class SBPressSequenceValidator, SBPressSequenceObserver, NSString, SBPressSequenceRecognizer, SBPressSequenceSettings, BSAction;
@protocol SBSOSLockGestureObserverDelegate;

@interface SBSOSLockGestureObserver : NSObject <SBPressSequenceRecognizerDelegate> {
    SBPressSequenceRecognizer *_recognizer;
    SBPressSequenceValidator *_validator;
    SBPressSequenceSettings *_settings;
    BOOL _lastKnownActiveState;
    BSAction *_triggerAction;
}

@property (retain, nonatomic) SBPressSequenceObserver *sosLockPressSequenceObserver;
@property (weak, nonatomic) id<SBSOSLockGestureObserverDelegate> delegate;
@property (readonly, nonatomic) long long configuration;
@property (readonly, nonatomic) long long triggerMechanism;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configure;
- (id)initWithConfiguration:(long long)a0;
- (void).cxx_destruct;
- (id)_validator;
- (id)init;
- (void)resetWithNewConfiguration:(long long)a0;
- (void)registerPressDownWithTimestamp:(double)a0;
- (void)registerPressUpWithTimestamp:(double)a0;
- (void)noteDidBeginSOSWithUUID:(id)a0;
- (double)_watchdogInterval;
- (void)_noteTriggerActionRecievedResponse;
- (void)_noteTriggerDidBecomeActive;
- (void)_noteTriggerDidBecomeInactive;
- (void)_configureSettings;
- (double)_intervalThatSucceeds;
- (void)pressSequenceRecognizerDidCompleteSequence:(id)a0;
- (void)pressSequenceRecognizer:(id)a0 didBeginPressDownAtIndex:(unsigned long long)a1;
- (void)pressSequenceRecognizerDidFail:(id)a0;
- (void)_setRecognizer:(id)a0;
- (unsigned long long)_numberOfPressesThatTrigger;
- (unsigned long long)_numberOfPressesThatActivate;

@end
