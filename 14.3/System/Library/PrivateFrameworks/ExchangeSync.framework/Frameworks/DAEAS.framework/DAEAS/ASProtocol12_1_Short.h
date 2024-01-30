@interface ASProtocol12_1_Short : ASProtocol12_1

- (id)requestURLStringWithTask:(id)a0;
- (BOOL)headerNeedsUserAgent;
- (BOOL)headerNeedsPolicyKey;
- (BOOL)headerNeedsProtocolVersion;
- (BOOL)commandStringNeedsSaveInSent;
- (unsigned char)shortProtocolVersion;

@end
