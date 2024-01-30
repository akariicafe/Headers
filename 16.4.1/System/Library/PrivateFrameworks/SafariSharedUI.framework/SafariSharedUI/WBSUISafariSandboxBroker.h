@interface WBSUISafariSandboxBroker : WBSSafariSandboxBroker <WBSUISafariSandboxBrokerProtocol>

- (void)getLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;

@end
