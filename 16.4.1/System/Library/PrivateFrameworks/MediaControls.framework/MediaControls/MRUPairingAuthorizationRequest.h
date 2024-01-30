@class AVOutputDevice;

@interface MRUPairingAuthorizationRequest : NSObject

@property (readonly, nonatomic) AVOutputDevice *outputDevice;

- (id)initWithOutputDevice:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)completeWithPasscode:(id)a0;

@end
