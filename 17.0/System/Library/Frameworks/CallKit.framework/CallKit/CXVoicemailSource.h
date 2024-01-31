@class NSString, NSURL, NSObject;
@protocol OS_dispatch_queue, CXVoicemailProviderVendorProtocol, CXVoicemailSourceDelegate;

@interface CXVoicemailSource : NSObject <CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<CXVoicemailProviderVendorProtocol> vendorProtocolDelegate;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (weak, nonatomic) id<CXVoicemailSourceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)bundle;
- (void).cxx_destruct;
- (oneway void)reportNewVoicemailsWithUpdates:(id)a0;
- (oneway void)actionCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginWithCompletionHandler:(id /* block */)a0;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (oneway void)registerWithConfiguration:(id)a0;
- (oneway void)reportVoicemailsRemovedWithUUIDs:(id)a0;
- (oneway void)reportVoicemailsUpdated:(id)a0;
- (oneway void)requestTransaction:(id)a0 completionHandler:(id /* block */)a1;

@end
