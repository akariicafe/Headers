@class AVOutputDeviceAuthorizationSessionInternal;
@protocol AVOutputDeviceAuthorizationSessionDelegate;

@interface AVOutputDeviceAuthorizationSession : NSObject {
    AVOutputDeviceAuthorizationSessionInternal *_ivars;
}

@property (weak) id<AVOutputDeviceAuthorizationSessionDelegate> delegate;

+ (void)initialize;
+ (id)sharedAuthorizationSession;
+ (id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent { } *)a0;

- (id)impl;
- (void)dealloc;
- (void)outputDeviceAuthorizationSessionImpl:(id)a0 didProvideAuthorizationRequest:(id)a1;
- (id)initWithOutputDeviceAuthorizationSessionImpl:(id)a0;
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)a0;
- (BOOL)outputDeviceAuthorizationSessionImpl:(id)a0 shouldRetryAuthorizationRequest:(id)a1 reason:(id)a2;

@end
