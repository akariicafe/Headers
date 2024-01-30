@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
}

@property (nonatomic) BOOL idsUPlusOneMode;

- (long long)connectionType;
- (id)init;
- (unsigned int)RATType;
- (BOOL)isVirtualRelayLink;
- (unsigned int)remoteRATType;

@end
