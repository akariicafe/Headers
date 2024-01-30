@class NSString, TrustCertificateViewController;
@protocol WFCertificateProviderContext;

@interface WFTrustCertificateViewController : UIViewController <TrustCertificateViewControllerDelegate, WFNetworkView>

@property (retain, nonatomic) TrustCertificateViewController *certViewController;
@property (retain, nonatomic) id<WFCertificateProviderContext> credentialsContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL wantsModalPresentation;

@end
