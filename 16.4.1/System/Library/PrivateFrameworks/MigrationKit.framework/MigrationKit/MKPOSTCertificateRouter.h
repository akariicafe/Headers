@class NSString, MKSRPServer;
@protocol MKPOSTCertificateRouterDelegate;

@interface MKPOSTCertificateRouter : NSObject <MKHTTPRouter>

@property (retain, nonatomic) MKSRPServer *srp;
@property (weak, nonatomic) id<MKPOSTCertificateRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSRP:(id)a0;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
