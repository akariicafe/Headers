@class NSMutableDictionary, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface PXPowerController : NSObject {
    _Atomic unsigned int _assertionIdentifierGenerator;
}

@property (class, readonly, nonatomic) PXPowerController *sharedController;

@property (readonly, nonatomic) NSMutableDictionary *assertionReasonsByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *powerControllerQueue;
@property (retain, nonatomic) BKSProcessAssertion *backgroundProcessAssertion;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) BOOL hasPowerAssertion;
@property (readonly, nonatomic) BOOL hasBackgroundAssertion;

- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removePowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)addPowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)releasePowerAssertion;
- (id)description;
- (void)takePowerAssertionIfNeeded;
- (void)releasePowerAssertionIfNeeded;
- (void)takePowerAssertion;
- (void)handleEnteringForeground;
- (void)handleEnteringBackground;
- (void)invalidateBackgroundAssertionIfNeeded;
- (void)acquireBackgroundAssertionIfNeeded;
- (void)invalidateBackgroundAssertion;
- (void)acquireBackgroundAssertion;
- (unsigned int)generateAssertionIdentifier;

@end
