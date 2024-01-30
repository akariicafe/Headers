@interface ASProtocolUnknown : ASProtocol

- (id)protocolVersion;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (int)supportsMailboxEnhancedSearch;

@end
