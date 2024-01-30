@class NSObject;
@protocol OS_dispatch_source, AFMyriadEmergencyDelegate, OS_dispatch_queue;

@interface AFMyriadEmergencyManager : NSObject {
    id<AFMyriadEmergencyDelegate> _delegate;
    struct __CFNotificationCenter { } *_center;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _handled;
    BOOL _informed;
}

+ (id)currentManager;

- (void).cxx_destruct;
- (void)informDelegateEmergencyHandled;
- (void)informDelegateEmergencyNotHandled;
- (void)_createDispatchTimerFor:(double)a0 toExecute:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 onQueue:(id)a1;
- (void)initiateEmergencyCallMyriad;

@end
