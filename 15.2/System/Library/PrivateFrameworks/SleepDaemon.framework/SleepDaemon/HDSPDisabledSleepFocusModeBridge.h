@class NSString;
@protocol HKSPSleepFocusModeBridgeDelegate;

@interface HDSPDisabledSleepFocusModeBridge : NSObject <HDSPSleepFocusModeBridge>

@property (weak, nonatomic) id<HKSPSleepFocusModeBridgeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)sleepFocusConfiguration:(id *)a0;
- (BOOL)hasSleepFocusMode:(id *)a0;
- (BOOL)createSleepFocusMode:(id *)a0;
- (BOOL)removeSleepFocusMode:(id *)a0;
- (id)sleepFocusModeIdentifier;

@end
