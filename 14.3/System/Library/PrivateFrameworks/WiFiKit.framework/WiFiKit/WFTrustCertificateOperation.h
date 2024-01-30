@class NSArray, NSString, TrustCertificateViewController, UIViewController;

@interface WFTrustCertificateOperation : WFOperation <TrustCertificateViewControllerDelegate>

@property (retain, nonatomic) TrustCertificateViewController *trustVc;
@property (retain, nonatomic) NSArray *certificateChain;
@property (nonatomic) BOOL accepted;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
