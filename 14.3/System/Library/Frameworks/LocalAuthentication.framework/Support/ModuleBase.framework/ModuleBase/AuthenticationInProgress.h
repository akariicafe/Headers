@class NSDictionary, NSDate, MechanismBase;
@protocol LAUIDelegate;

@interface AuthenticationInProgress : NSObject {
    id<LAUIDelegate> _uiDelegate;
    NSDictionary *_internalOptions;
    id /* block */ _reply;
    int _originatorPid;
    unsigned int _originatorUid;
    NSDate *_started;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) MechanismBase *mechanism;
@property (readonly, nonatomic) long long originatorId;

- (void).cxx_destruct;
- (id)description;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (id)initWithMechanism:(id)a0 policy:(long long)a1 uiDelegate:(id)a2 originator:(id)a3 internalInfo:(id)a4 reply:(id /* block */)a5;

@end
