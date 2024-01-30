@interface ASProtocol16_1 : ASProtocol16_0

- (id)protocolVersion;
- (int)supportsUniqueServerId;
- (BOOL)supportsProposeNewTime;
- (BOOL)supportsMailboxEnhancedSearch;
- (BOOL)supportsForwarderTracking;
- (unsigned char)shortProtocolVersion;

@end
