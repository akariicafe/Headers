@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *certificate;

+ (id)getSessionCertificateResponse;
+ (id)getSessionCertificateResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
