@class NSString, NSObject;
@protocol ILClassificationUIExtensionHostContextDelegate, OS_dispatch_queue;

@interface ILClassificationUIExtensionHostContext : NSExtensionContext <ILClassificationUIExtensionHostProtocol>

@property (weak, nonatomic) id<ILClassificationUIExtensionHostContextDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)classificationResponseForRequest:(id)a0 completion:(id /* block */)a1;
- (void)prepareForClassificationRequest:(id)a0;
- (oneway void)setReadyForClassificationResponse:(BOOL)a0;

@end
