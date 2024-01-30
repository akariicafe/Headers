@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SleepAssertionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *assertions;
@property (nonatomic) BOOL sleepAssertionHeld;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sleepAssertionsLock;
@property (nonatomic) BOOL eaSleepAssertionHeld;
@property (nonatomic) unsigned int eaSleepAssertionID;
@property (nonatomic) BOOL applePencilSleepAssertionHeld;
@property (nonatomic) unsigned int applePencilSleepAssertionID;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *applePencilSleepAssertionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *applePencilSleepAssertionTimerQueue;
@property (nonatomic) BOOL mfi4SleepAssertionHeld;
@property (nonatomic) unsigned int mfi4SleepAssertionID;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *mfi4SleepAssertionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mfi4SleepAssertionTimerQueue;

+ (id)sharedManager;

- (void)destroySleepAssertionForUUID:(id)a0;
- (void)removeMFi4SleepAssertion;
- (void)createApplePencilSleepAssertion;
- (void)createSleepAssertionForUUID:(id)a0;
- (void).cxx_destruct;
- (void)removeEASleepAssertion;
- (void)removeApplePencilSleepAssertion;
- (id)init;
- (void)createMFi4SleepAssertion;
- (void)dealloc;
- (void)createEASleepAssertion;

@end
