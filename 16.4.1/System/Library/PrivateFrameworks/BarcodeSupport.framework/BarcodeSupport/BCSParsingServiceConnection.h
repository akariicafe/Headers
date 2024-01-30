@class NSXPCConnection;

@interface BCSParsingServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *parsingServiceConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)decodeAppClipCodeURLWithEncodedData:(id)a0 codingVersion:(unsigned long long)a1 requiresAuthorization:(BOOL)a2 withReply:(id /* block */)a3;
- (void)parseQRCodeFeature:(id)a0 withReply:(id /* block */)a1;
- (void)parseQRCodeMetadata:(id)a0 withReply:(id /* block */)a1;
- (void)parseQRCodeString:(id)a0 withReply:(id /* block */)a1;
- (void)setPreferredBundleIdentifier:(id)a0 forURL:(id)a1;

@end
