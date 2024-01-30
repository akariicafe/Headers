@class MSSetupViewController, MSServiceAccount;
@protocol MSAuthenticationPresentationContext;

@interface MSSetupSession : NSObject

@property (readonly, nonatomic) unsigned long long testFlags;
@property (readonly, retain, nonatomic) MSSetupViewController *viewController;
@property (weak, nonatomic) id<MSAuthenticationPresentationContext> presentationContext;
@property (readonly, nonatomic) MSServiceAccount *account;

- (void).cxx_destruct;
- (BOOL)startWithError:(id *)a0;
- (id)initWithServiceAccount:(id)a0 test:(unsigned long long)a1;
- (id)initWithServiceAccount:(id)a0;

@end
