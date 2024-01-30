@class NSArray, NSSet, NSMutableDictionary, NSMutableSet, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {
    BOOL _activateCalled;
    NSMutableDictionary *_discoveredPeople;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableSet *_rangingPersonIDs;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int discoveryFlags;
@property (nonatomic) int discoveryMode;
@property (readonly, copy, nonatomic) NSArray *discoveredPeople;
@property (readonly, nonatomic) int peopleDensity;
@property (copy, nonatomic) id /* block */ peopleDensityChangedHandler;
@property (copy, nonatomic) id /* block */ personFoundHandler;
@property (copy, nonatomic) id /* block */ personLostHandler;
@property (copy, nonatomic) id /* block */ personChangedHandler;
@property (copy, nonatomic) NSSet *rangingPeople;
@property (copy, nonatomic) id /* block */ statusChangedHandler;
@property (readonly, nonatomic) unsigned int statusFlags;

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (BOOL)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_scheduleRetry;
- (void)_updatePeopleDensity:(unsigned long long)a0;
- (void)xpcPeopleStatusChanged:(unsigned int)a0;
- (void)xpcPersonFound:(id)a0;
- (void)xpcPersonLost:(id)a0;
- (void)xpcPersonChanged:(id)a0 changes:(unsigned int)a1;
- (void)xpcPersonID:(id)a0 deviceID:(id)a1 updatedMeasurement:(id)a2;
- (void)_lostAllPeople;
- (void)addAppleID:(id)a0 completion:(id /* block */)a1;
- (void)removeAppleID:(id)a0 completion:(id /* block */)a1;

@end
