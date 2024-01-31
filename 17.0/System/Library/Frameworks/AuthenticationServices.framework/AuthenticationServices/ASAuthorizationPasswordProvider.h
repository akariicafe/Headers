@class NSString;

@interface ASAuthorizationPasswordProvider : NSObject <ASAuthorizationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createRequest;

@end
