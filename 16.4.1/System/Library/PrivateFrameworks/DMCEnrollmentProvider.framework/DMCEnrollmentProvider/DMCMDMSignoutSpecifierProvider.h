@class DMCEnrollmentInterface;

@interface DMCMDMSignoutSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface;

- (id)_specifierForSignoutButton;
- (id)viewController;
- (id)specifiers;
- (void)_specifierForMDMProfileWasTapped:(id)a0;
- (void).cxx_destruct;

@end
