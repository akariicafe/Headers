@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
    BOOL _isTestingOneToOne;
}

- (unsigned int)RATType;
- (id)init;
- (long long)connectionType;
- (unsigned int)remoteRATType;
- (BOOL)isVirtualRelayLink;

@end
