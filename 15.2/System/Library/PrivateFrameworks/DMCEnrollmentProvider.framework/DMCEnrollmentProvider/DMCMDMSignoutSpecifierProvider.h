@class DMCEnrollmentInterface;

@interface DMCMDMSignoutSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface;

- (id)specifiers;
- (id)viewController;
- (void).cxx_destruct;
- (void)_specifierForMDMProfileWasTapped:(id)a0;
- (id)_specifierForSignoutButton;

@end
