@class NSString, BSWatchdog, FBProcess;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver> {
    BSWatchdog *_watchdog;
}

@property (readonly, nonatomic) FBProcess *process;
@property (readonly, nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processManager:(id)a0 didRemoveProcess:(id)a1;
- (void).cxx_destruct;
- (id)initWithProcess:(id)a0 timeout:(double)a1;
- (id)initWithProcess:(id)a0;
- (void)processManager:(id)a0 didAddProcess:(id)a1;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_begin;

@end
