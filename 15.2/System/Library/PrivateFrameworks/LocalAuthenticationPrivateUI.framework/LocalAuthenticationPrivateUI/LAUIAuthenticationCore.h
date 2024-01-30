@class LAContext, NSDictionary, UIView, NSObject;
@protocol LAUIAuthenticationCoreDelegate;

@interface LAUIAuthenticationCore : NSObject <LAUIDelegate, LAUIAuthentication> {
    BOOL _doneMatching;
    BOOL _doneWatch;
}

@property (nonatomic) unsigned long long enabledMechanisms;
@property (nonatomic) unsigned long long activeMechanisms;
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (nonatomic, getter=isKeyWindow) BOOL keyWindow;
@property (nonatomic, getter=isUiActive) BOOL uiActive;
@property (retain, nonatomic) LAContext *context;
@property (readonly, nonatomic) NSDictionary *authenticationResult;
@property (weak, nonatomic) NSObject<LAUIAuthenticationCoreDelegate> *delegate;
@property (retain, nonatomic) UIView *view;
@property (readonly, nonatomic) long long biometryType;

+ (void)performBlockOnMainThread:(id /* block */)a0;

- (void)_notification:(id)a0;
- (id)notificationNames;
- (void).cxx_destruct;
- (void)checkView;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (BOOL)isMechanismEnabled:(unsigned long long)a0;
- (BOOL)enableMechanism:(unsigned long long)a0 error:(id *)a1;
- (BOOL)disableMechanism:(unsigned long long)a0 error:(id *)a1;
- (void)_setupMechanisms:(unsigned long long)a0;
- (id)initWithMechanisms:(unsigned long long)a0;
- (BOOL)isMechanismAvailable:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isMechanismActive:(unsigned long long)a0;
- (void)_setupNotifications:(BOOL)a0;
- (void)_enableAvailableMechanisms:(unsigned long long)a0;
- (BOOL)_mechanism:(unsigned long long)a0 enable:(BOOL)a1 error:(id *)a2;
- (void)startOrStopBackgroundMechanisms;
- (void)_stopBackgroundMechanisms;
- (void)_startBackgroundMechanisms;
- (long long)_policyForBackgroundMechanisms;
- (void)_handleBackgroundMechanismsResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)_biometryState:(long long)a0;
- (void)_processActivityChangeForNotification:(id)a0 block:(id /* block */)a1;
- (BOOL)_simpleStatusInParams:(id)a0 touchId:(long long)a1 faceId:(long long)a2;
- (void)_biometricNoMatch;

@end
