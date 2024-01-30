@class NSString;

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentAccountCopyTokenWithBundleID:(id)a0 version:(id)a1 reply:(id /* block */)a2;
- (void)prepareFileProvidersWithReply:(id /* block */)a0;
- (void)fetchContainerPathForCurrentPersonaWithReply:(id /* block */)a0;
- (void)getPrimaryiCloudAccountStatus:(id /* block */)a0;
- (void)fetchGroupContainerPathForCurrentPersonaWithReply:(id /* block */)a0;

@end
