@class HMFTimer, NSString, NSNetServiceBrowser, HMFUnfairLock, NSMutableSet;

@interface HMDBonjourBrowserHelper : HMFObject <NSNetServiceBrowserDelegate, HMFTimerDelegate>

@property (nonatomic) double browsingInterval;
@property (nonatomic) double browsingPeriodicity;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) HMFUnfairLock *lock;
@property (retain, nonatomic) HMFTimer *browsingTimer;
@property (retain, nonatomic) HMFTimer *periodicityTimer;
@property (retain, nonatomic) NSNetServiceBrowser *browser;
@property (retain, nonatomic) NSMutableSet *discoveredServices;
@property (readonly, nonatomic) unsigned long long discoveredServicesCount;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setStarted:(BOOL)a0;
- (void)stop;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)timerDidFire:(id)a0;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)start;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (id)initWithServicesOfType:(id)a0 browsingTimeInterval:(double)a1 browsingPeriodicity:(double)a2;

@end
