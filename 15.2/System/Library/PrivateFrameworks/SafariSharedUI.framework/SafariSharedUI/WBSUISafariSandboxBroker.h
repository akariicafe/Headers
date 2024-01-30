@interface WBSUISafariSandboxBroker : WBSSafariSandboxBroker <WBSUISafariSandboxBrokerProtocol>

- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;

@end
