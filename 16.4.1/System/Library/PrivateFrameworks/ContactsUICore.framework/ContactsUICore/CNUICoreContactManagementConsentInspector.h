@class STManagementState, NSString;
@protocol CNSchedulerProvider;

@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck>

@property (readonly, nonatomic) STManagementState *managementState;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)a0;
- (id)contactManagementConsentStateFutureForDSID:(id)a0;
- (id)initWithManagementState:(id)a0 schedulerProvider:(id)a1;

@end
