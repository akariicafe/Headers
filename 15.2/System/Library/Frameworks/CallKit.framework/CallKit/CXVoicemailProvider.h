@class NSString;
@protocol CXVoicemailProviderHostProtocol, CXVoicemailProviderDelegate;

@interface CXVoicemailProvider : CXAbstractProvider <CXVoicemailProviderVendorProtocol>

@property (weak, nonatomic) id<CXVoicemailProviderDelegate> delegate;
@property (readonly, nonatomic) id<CXVoicemailProviderHostProtocol> hostProtocolDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performAction:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)reportNewVoicemailsWithUpdates:(id)a0;
- (void)reportVoicemailsUpdated:(id)a0;
- (void)reportVoicemailsRemovedWithUUIDs:(id)a0;
- (id)pendingVoicemailActionsOfClass:(Class)a0 withVoicemailUUID:(id)a1;
- (void)reportNewVoicemailWithUpdate:(id)a0;
- (void)reportVoicemailUpdated:(id)a0;
- (void)reportVoicemailRemovedWithUUID:(id)a0;

@end
