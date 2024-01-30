@class NSString;

@interface NEExtensionAppPushProviderContext : NEExtensionProviderContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)extensionPoint;
- (void)startConnectionWithProviderConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithReason:(int)a0 completionHandler:(id /* block */)a1;
- (void)reportIncomingCall:(id)a0;
- (void)sendOutgoingCallMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendTimerEvent;
- (BOOL)isStartMethodOverridden:(id)a0;
- (void)dealloc;
- (void)setProviderConfiguration:(id)a0;

@end
