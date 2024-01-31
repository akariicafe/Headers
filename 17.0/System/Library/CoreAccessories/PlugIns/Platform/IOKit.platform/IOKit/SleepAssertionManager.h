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

- (id)init;
- (void)removeMFi4SleepAssertion;
- (void)dealloc;
- (void)createSleepAssertionForUUID:(id)a0;
- (void)removeApplePencilSleepAssertion;
- (void)createMFi4SleepAssertion;
- (void)removeEASleepAssertion;
- (void).cxx_destruct;
- (void)createApplePencilSleepAssertion;
- (void)destroySleepAssertionForUUID:(id)a0;
- (void)createEASleepAssertion;

@end
