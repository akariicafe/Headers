@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
}

- (id)init;
- (unsigned int)RATType;
- (unsigned int)remoteRATType;

@end
