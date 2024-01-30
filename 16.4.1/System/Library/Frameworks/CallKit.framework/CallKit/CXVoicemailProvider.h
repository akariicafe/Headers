@class NSString, CXAbstractProvider, NSArray;
@protocol CXVoicemailProviderHostProtocol, CXVoicemailProviderDelegate;

@interface CXVoicemailProvider : NSObject <CXActionDelegateInternal, CXVoicemailProviderVendorProtocol, CXAbstractProvider>

@property (readonly, nonatomic) CXAbstractProvider *abstractProvider;
@property (weak, nonatomic) id<CXVoicemailProviderDelegate> delegate;
@property (readonly, nonatomic) id<CXVoicemailProviderHostProtocol> voicemailProviderHostDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)performAction:(id)a0;
- (id)init;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)reportVoicemailRemovedWithUUID:(id)a0;
- (void)reportNewVoicemailsWithUpdates:(id)a0;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (id)pendingVoicemailActionsOfClass:(Class)a0 withVoicemailUUID:(id)a1;
- (void)reportNewVoicemailWithUpdate:(id)a0;
- (void)reportVoicemailUpdated:(id)a0;
- (void)reportVoicemailsRemovedWithUUIDs:(id)a0;
- (void)reportVoicemailsUpdated:(id)a0;

@end
