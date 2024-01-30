@class NSString, BSAbsoluteMachTimer, FBProcess;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver> {
    BSAbsoluteMachTimer *_timer;
}

@property (readonly, nonatomic) FBProcess *process;
@property (readonly, nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (id)_customizedDescriptionProperties;
- (id)initWithProcess:(id)a0 timeout:(double)a1;
- (void)processManager:(id)a0 didAddProcess:(id)a1;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)processManager:(id)a0 didRemoveProcess:(id)a1;
- (id)initWithProcess:(id)a0;
- (void).cxx_destruct;

@end
