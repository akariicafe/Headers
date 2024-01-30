@class NSString;

@interface XAMLocalAuthenticationProvider : NSObject <XAMAuthorizationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAuthorizationWithReply:(id /* block */)a0;
- (id)authorizationWithError:(id *)a0;
- (id)localizedAuthorizationReason;

@end
