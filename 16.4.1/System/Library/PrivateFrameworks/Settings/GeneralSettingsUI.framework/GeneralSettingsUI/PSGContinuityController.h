@class PSSpecifier;

@interface PSGContinuityController : PSListController

@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseGroup;
@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseItem;

- (void)profileNotification:(id)a0;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)setContinuityEnabled:(id)a0 specifier:(id)a1;
- (id)airplayToTV:(id)a0;
- (id)isContinuityEnabled:(id)a0;
- (BOOL)isContinuityRestricted;
- (id)isLinkKeyboardAndMouseEnabled:(id)a0;
- (id)isWombatEnabled:(id)a0;
- (void)setAirplayToTV:(id)a0 specifier:(id)a1;
- (void)setLinkKeyboardAndMouseEnabled:(id)a0 specifier:(id)a1;
- (void)setWombatEnabled:(id)a0 specifier:(id)a1;
- (void)updateContinuitySpecifiers;

@end
