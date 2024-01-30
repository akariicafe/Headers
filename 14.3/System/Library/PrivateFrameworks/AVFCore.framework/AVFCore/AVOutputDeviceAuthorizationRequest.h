@class AVOutputDeviceAuthorizationRequestInternal, NSString, AVOutputDevice, NSError;

@interface AVOutputDeviceAuthorizationRequest : NSObject {
    AVOutputDeviceAuthorizationRequestInternal *_ivars;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSString *authorizationTokenType;

- (void)cancel;
- (id)impl;
- (void)dealloc;
- (void)respondWithAuthorizationToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithOutputDeviceAuthorizationRequestImpl:(id)a0;
- (id)description;

@end
