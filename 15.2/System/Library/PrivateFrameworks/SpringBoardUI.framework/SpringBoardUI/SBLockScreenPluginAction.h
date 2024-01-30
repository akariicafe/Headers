@class NSString, BSAction;

@interface SBLockScreenPluginAction : NSObject {
    BSAction *_action;
}

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long authenticationPolicy;

+ (id)action;
+ (id)actionWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (id)init;
- (BOOL)isApplicationAction;
- (BOOL)isEmergencyDialerAction;
- (BOOL)isCallAction;
- (void)sendResponseWithSuccess:(BOOL)a0;

@end
