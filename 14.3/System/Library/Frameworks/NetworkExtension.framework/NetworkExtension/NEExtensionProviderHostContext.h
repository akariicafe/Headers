@class NSUUID, NSXPCConnection, NSData, NSString, NEUserNotification;
@protocol NEExtensionProviderHostDelegate, NEExtensionProviderProtocol;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {
    id<NEExtensionProviderProtocol> _vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
}

@property (nonatomic) BOOL stopped;
@property (readonly, nonatomic) NSXPCConnection *vendorConnection;
@property (readonly, nonatomic) BOOL isHostingSystemExtension;
@property (weak) id<NEExtensionProviderHostDelegate> delegate;
@property (readonly) int pid;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *auditTokenData;
@property (readonly) int requiredEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)wake;
- (void).cxx_destruct;
- (void)dispose;
- (id)vendorContext;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)stopWithReason:(int)a0;
- (void)setDescription:(id)a0;
- (void)createWithCompletionHandler:(id /* block */)a0;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)startedWithError:(id)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (void)displayMessage:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (id)copyValueForEntitlement:(id)a0;
- (BOOL)isSignedWithDeveloperID;
- (id)initWithVendorEndpoint:(id)a0 delegate:(id)a1;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
