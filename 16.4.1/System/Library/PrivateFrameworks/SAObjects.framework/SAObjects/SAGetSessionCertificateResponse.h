@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *certificate;

+ (id)getSessionCertificateResponse;
+ (id)getSessionCertificateResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
