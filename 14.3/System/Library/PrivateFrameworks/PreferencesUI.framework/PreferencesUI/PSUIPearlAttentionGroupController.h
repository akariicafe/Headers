@class BKUserProtectedConfiguration, PSSpecifier, NSString, BKDevicePearl, PSListController;

@interface PSUIPearlAttentionGroupController : NSObject <PSSpecifierGroup>

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) BKDevicePearl *pearlDevice;
@property (retain, nonatomic) BKUserProtectedConfiguration *updatedConfiguration;
@property (retain, nonatomic) NSString *pinCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void).cxx_destruct;
- (id)_pearlDevice;
- (id)specifiers;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)didCancelEnteringPIN;
- (void)setPearlUnlock:(id)a0 specifier:(id)a1;
- (id)pearlUnlock:(id)a0;
- (void)setAttentionAware:(id)a0 specifier:(id)a1;
- (id)attentionAware:(id)a0;
- (void)setProtectedCredentialsWithPasscode:(id)a0;

@end
