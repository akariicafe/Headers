@class NSString, NSURL, NSObject;
@protocol CXAbstractProviderVendorProtocol, CXAbstractProviderSourceDelegate, OS_dispatch_queue, CXAbstractProviderSourceDelegateInternal;

@interface CXAbstractProviderSource : NSObject <CXAbstractProviderHostProtocol, CXAbstractProviderVendorProtocol>

@property (nonatomic, getter=isConnected) BOOL connected;
@property (weak, nonatomic) id<CXAbstractProviderSourceDelegateInternal> internalDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<CXAbstractProviderVendorProtocol> vendorProtocolDelegate;
@property (weak, nonatomic) id<CXAbstractProviderSourceDelegate> delegate;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)requestTransaction:(id)a0 completionHandler:(id /* block */)a1;

@end
