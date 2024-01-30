@class NSError, NSString, HMFTimer, SFDeviceRepairSession, NSUUID, HMSymptom, _HMContext, UIViewController, HMFUnfairLock;
@protocol HMSymptomFixSessionDelegate;

@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SFDeviceRepairSession *deviceRepairSession;
@property (nonatomic, getter=isDeviceRepairSessionFinished) BOOL deviceRepairSessionFinished;
@property (nonatomic) BOOL hasSymptomDisappeared;
@property (retain, nonatomic) HMFTimer *symptomDisappearanceTimer;
@property (readonly, nonatomic) HMSymptom *symptom;
@property (readonly, nonatomic) NSUUID *deviceIdentifier;
@property (nonatomic) unsigned int deviceRepairFlags;
@property (weak, nonatomic) id<HMSymptomFixSessionDelegate> delegate;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_createSymptomDisappearanceTimer;
+ (id)_createDeviceRepairSession;

- (void)timerDidFire:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)_updateState;
- (id)initWithSymptom:(id)a0 deviceIdentifier:(id)a1 context:(id)a2;
- (void)noteSymptomDisappeared;
- (void)_updateForDeviceSetupProgressEvent:(unsigned int)a0 error:(id)a1;
- (void)_startSymptomDisappearanceTimer;

@end
