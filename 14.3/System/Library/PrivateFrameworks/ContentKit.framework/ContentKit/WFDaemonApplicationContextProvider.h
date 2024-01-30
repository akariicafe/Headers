@class NSString;

@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider>

@property (readonly, nonatomic) NSString *userInterfaceType;
@property (nonatomic) BOOL wfIdleTimerDisabled;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldReverseLayoutDirection;
- (id)init;
- (void).cxx_destruct;
- (long long)currentApplicationStateForWFApplicationContext:(id)a0;
- (id)bundleForWFApplicationContext:(id)a0;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)a0;
- (id)notificationNameForApplicationStateEvent:(long long)a0 applicationContext:(id)a1;
- (id)keyWindowForWFApplicationContext:(id)a0;
- (id)applicationForWFApplicationContext:(id)a0;
- (id)initWithUserInterfaceType:(id)a0;

@end
