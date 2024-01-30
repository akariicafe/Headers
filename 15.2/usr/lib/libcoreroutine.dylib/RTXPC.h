@interface RTXPC : NSObject

+ (id)signingIdentifierOfConnection:(id)a0;
+ (id)executablePathOfConnection:(id)a0;
+ (BOOL)clientCodeSignatureIsValid:(id)a0 error:(id *)a1;

@end
