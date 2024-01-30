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
- (id)init;
- (id)initWithConfiguration:(long long)a0;
- (void).cxx_destruct;
- (id)_validator;
- (void)_setRecognizer:(id)a0;
- (void)registerPressDownWithTimestamp:(double)a0;
- (void)pressSequenceRecognizerDidFail:(id)a0;
- (void)_configureSettings;
- (double)_intervalThatSucceeds;
- (void)_noteTriggerActionRecievedResponse;
- (void)_noteTriggerDidBecomeActive;
- (void)_noteTriggerDidBecomeInactive;
- (unsigned long long)_numberOfPressesThatActivate;
- (unsigned long long)_numberOfPressesThatTrigger;
- (double)_watchdogInterval;
- (void)noteDidBeginSOSWithUUID:(id)a0;
- (void)pressSequenceRecognizer:(id)a0 didBeginPressDownAtIndex:(unsigned long long)a1;
- (void)pressSequenceRecognizerDidCompleteSequence:(id)a0;
- (void)registerPressUpWithTimestamp:(double)a0;
- (void)resetWithNewConfiguration:(long long)a0;

@end
