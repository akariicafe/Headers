@class NSDictionary, NSData, ISO18013TerminalAuthInfo;

@interface STSISO18013CredRequest : STSCredentialRequest <NSSecureCoding> {
    NSDictionary *_requestByNamespace;
    NSData *_authACL;
    ISO18013TerminalAuthInfo *_readerAuthInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
