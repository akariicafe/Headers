@class BCAuthenticationRequest, NSString;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) BCAuthenticationRequest *authenticationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
