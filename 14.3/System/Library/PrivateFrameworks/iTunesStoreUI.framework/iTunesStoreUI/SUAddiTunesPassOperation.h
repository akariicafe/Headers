@class UIViewController, NSString, SSAuthenticationContext, NSObject, PKPass;
@protocol OS_dispatch_semaphore;

@interface SUAddiTunesPassOperation : ISOperation <PKAddPassesViewControllerDelegate>

@property (nonatomic) BOOL addedCard;
@property (retain, nonatomic) PKPass *presentedPass;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
