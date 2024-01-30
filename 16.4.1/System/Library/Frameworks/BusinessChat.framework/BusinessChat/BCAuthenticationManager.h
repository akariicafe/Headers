@class NSString;
@protocol BCOAuth2RequestProtocol;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) id<BCOAuth2RequestProtocol> authenticationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
