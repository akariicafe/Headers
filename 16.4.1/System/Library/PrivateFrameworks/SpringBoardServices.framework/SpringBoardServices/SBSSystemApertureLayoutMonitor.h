@class NSString, NSPointerArray, NSArray, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBSSystemApertureLayoutMonitor : NSObject <BSInvalidatable> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSPointerArray *_observers;
    NSArray *_frames;
    id<BSInvalidatable> _restrictToInertAssertion;
    BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)systemApertureLayoutDidChange:(id)a0;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionWithReason:(id)a0;

@end
