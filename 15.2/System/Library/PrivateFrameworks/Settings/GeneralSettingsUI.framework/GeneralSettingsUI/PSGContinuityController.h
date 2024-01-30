@class PSSpecifier;

@interface PSGContinuityController : PSListController

@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseGroup;
@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseItem;

- (id)specifiers;
- (void)profileNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isContinuityRestricted;
- (void)updateContinuitySpecifiers;
- (id)isContinuityEnabled:(id)a0;
- (void)setContinuityEnabled:(id)a0 specifier:(id)a1;
- (id)airplayToTV:(id)a0;
- (void)setAirplayToTV:(id)a0 specifier:(id)a1;
- (void)setLinkKeyboardAndMouseEnabled:(id)a0 specifier:(id)a1;
- (id)isLinkKeyboardAndMouseEnabled:(id)a0;

@end
