@class TPSCallForwardingController, NSString, PSSpecifier;

@interface TPSCallForwardingListController : TPSListController <TPSCallForwardingControllerDelegate>

@property (readonly, nonatomic) PSSpecifier *conditionalServiceSwitchSpecifier;
@property (readonly, nonatomic) PSSpecifier *mainSwitchSpecifier;
@property (readonly, nonatomic) TPSCallForwardingController *callForwardingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)configureCell:(id)a0;
- (void)callForwardingController:(id)a0 didChangeServiceType:(long long)a1;
- (void)callForwardingController:(id)a0 didChangeValue:(id)a1 error:(id)a2;
- (id)conditionalServiceBusyPhoneNumber:(id)a0;
- (id)conditionalServiceSwitchOn:(id)a0;
- (id)conditionalServiceTypeSpecifiers;
- (id)conditionalServiceUnansweredPhoneNumber:(id)a0;
- (id)conditionalServiceUnreachablePhoneNumber:(id)a0;
- (void)configureCell:(id)a0 forSpecifier:(id)a1;
- (id)mainSwitchOn:(id)a0;
- (void)setConditionalServiceBusyPhoneNumber:(id)a0 specifier:(id)a1;
- (void)setConditionalServiceSwitchOn:(id)a0 specifier:(id)a1;
- (void)setConditionalServiceUnansweredPhoneNumber:(id)a0 specifier:(id)a1;
- (void)setConditionalServiceUnreachablePhoneNumber:(id)a0 specifier:(id)a1;
- (void)setMainSwitchOn:(id)a0 specifier:(id)a1;
- (void)setUnconditionalServicePhoneNumber:(id)a0 specifier:(id)a1;
- (id)unconditionalServicePhoneNumber:(id)a0;
- (id)unconditionalServiceTypeSpecifiers;

@end
