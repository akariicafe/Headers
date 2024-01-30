@class NSString, CertUITrustManager;

@interface CertUIConnectionDelegate : NSObject {
    CertUITrustManager *_trustManager;
    struct { unsigned char canAuthenticateAgainstProtectionSpace : 1; unsigned char didReceiveAuthenticationChallenge : 1; } _delegateRespondsTo;
}

@property (weak, nonatomic) id forwardingDelegate;
@property (copy, nonatomic) NSString *connectionDisplayName;

+ (id)defaultServiceForProtocol:(id)a0;

- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_continueConnectionWithResponse:(int)a0 challenge:(id)a1 service:(id)a2;

@end
