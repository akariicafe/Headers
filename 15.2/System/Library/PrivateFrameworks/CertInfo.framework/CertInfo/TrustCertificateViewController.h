@class CertificateViewController;
@protocol TrustCertificateViewControllerDelegate;

@interface TrustCertificateViewController : UINavigationController

@property (nonatomic) BOOL allowCertificateTrust;
@property (retain, nonatomic) CertificateViewController *certificateViewController;
@property (weak, nonatomic) id<TrustCertificateViewControllerDelegate> trustCertificateDelegate;

- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_accept;
- (id)initWithTrust:(struct __SecTrust { } *)a0 action:(int)a1 delegate:(id)a2;
- (void)setShowCertificateButton:(BOOL)a0 localizedTitle:(id)a1 localizedDescription:(id)a2 destructive:(BOOL)a3 handler:(id /* block */)a4;
- (void)_setupNavItem;
- (void)_dismissWithResult:(int)a0;
- (id)initWithTrustCertificateDelegate:(id)a0 allowTrust:(BOOL)a1;
- (id)initWithTrust:(struct __SecTrust { } *)a0 action:(int)a1 delegate:(id)a2 allowTrust:(BOOL)a3;
- (id)initWithTrustCertificateDelegate:(id)a0;
- (void)setCertificateInfo:(id)a0 issuer:(id)a1 purpose:(id)a2 expiration:(id)a3 isRoot:(BOOL)a4 properties:(id)a5 action:(int)a6;

@end
