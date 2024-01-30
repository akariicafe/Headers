@interface PFBase64MercuryCodec : PFBase64Codec

+ (const char *)decoder;
+ (const char *)alphabet;
+ (unsigned long long)encodedUuidLength;
+ (BOOL)appendPadding;
+ (BOOL)checkTerminators:(long long)a0 expected:(long long)a1;

@end
