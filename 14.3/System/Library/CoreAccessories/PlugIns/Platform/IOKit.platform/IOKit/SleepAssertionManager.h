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

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeApplePencilSleepAssertion;
- (void)removeEASleepAssertion;
- (void)createApplePencilSleepAssertion;
- (void)createSleepAssertionForUUID:(id)a0;
- (void)destroySleepAssertionForUUID:(id)a0;
- (void)createEASleepAssertion;

@end
