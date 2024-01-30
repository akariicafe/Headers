@class ASWebAuthenticationSession, NSString;

@interface BridgedWebAuthenticationSession : NSObject <ASWebAuthenticationPresentationContextProviding>

@property (retain, nonatomic) ASWebAuthenticationSession *authenticationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
