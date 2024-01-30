@class NSString, NSNumber, MCProfile;
@protocol DMCEnrollmentConsentViewControllerDelegate;

@interface DMCEnrollmentConsentViewController : DMCEnrollmentTemplateTableViewController

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *orgName;
@property (retain, nonatomic) NSNumber *requiredAppID;
@property (retain, nonatomic) MCProfile *profile;
@property (weak) id<DMCEnrollmentConsentViewControllerDelegate> delegate;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_cellDataForESSOBYODDisclosure;
- (id)_cellDataForRegularBYODDisclosure;
- (id)initWithDelegate:(id)a0 username:(id)a1 profile:(id)a2;

@end
