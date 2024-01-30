@class SBBootDefaults, NSString;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding>

@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isInLostMode) BOOL inLostMode;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic) BOOL hasPasscodeSet;
@property (nonatomic) BOOL requiresSetup;
@property (nonatomic) BOOL shouldNeverLock;
@property (nonatomic, getter=isLoginSession) BOOL loginSession;
@property (retain, nonatomic) SBBootDefaults *bootDefaults;
@property (nonatomic, getter=isForSimulator) BOOL forSimulator;
@property (nonatomic) long long homeButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
