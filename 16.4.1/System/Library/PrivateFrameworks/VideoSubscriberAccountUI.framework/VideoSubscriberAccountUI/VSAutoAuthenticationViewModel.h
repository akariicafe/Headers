@class NSString;
@protocol VSAutoAuthenticationViewModelDelegate;

@interface VSAutoAuthenticationViewModel : VSCuratedViewModel

@property (weak, nonatomic) id<VSAutoAuthenticationViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *messageTitle;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *manualSignInTitle;
@property (copy, nonatomic) NSString *manualSignInButtonText;

- (id)init;
- (void).cxx_destruct;
- (void)configureWithRequest:(id)a0;
- (void)didSelectManualSignInButton;

@end
