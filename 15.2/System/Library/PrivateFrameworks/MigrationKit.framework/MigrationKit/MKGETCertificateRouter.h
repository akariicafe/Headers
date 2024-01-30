@class NSString, MKCertificate, MKSRPServer;
@protocol MKGETCertificateRouterDelegate;

@interface MKGETCertificateRouter : NSObject <MKHTTPRouter>

@property (retain, nonatomic) MKSRPServer *srp;
@property (retain, nonatomic) MKCertificate *certificate;
@property (weak, nonatomic) id<MKGETCertificateRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;
- (id)initWithSRP:(id)a0 certificate:(id)a1;

@end
