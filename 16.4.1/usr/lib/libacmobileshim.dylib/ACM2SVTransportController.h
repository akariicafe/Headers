@class NSString;
@protocol ACM2SVTransportControllerDelegate;

@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol>

@property (nonatomic) id<ACM2SVTransportControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelImageFetching;
- (void)generateAndSendSecCodeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getImageWithURL:(id)a0 completion:(id /* block */)a1;
- (void)loadTrustedDevicesWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifySecureCodeWithContext:(id)a0 completion:(id /* block */)a1;

@end
