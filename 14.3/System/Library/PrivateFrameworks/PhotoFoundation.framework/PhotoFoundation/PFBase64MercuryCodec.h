@interface PFBase64MercuryCodec : PFBase64Codec

+ (unsigned long long)encodedUuidLength;
+ (BOOL)appendPadding;
+ (BOOL)checkTerminators:(long long)a0 expected:(long long)a1;
+ (const char *)alphabet;
+ (const char *)decoder;

@end
