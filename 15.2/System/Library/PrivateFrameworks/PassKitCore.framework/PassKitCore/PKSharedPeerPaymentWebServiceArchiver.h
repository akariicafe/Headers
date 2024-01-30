@class NSString, PKPeerPaymentService;

@interface PKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver> {
    PKPeerPaymentService *_peerPaymentService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)archiveContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithPeerPaymentService:(id)a0;

@end
