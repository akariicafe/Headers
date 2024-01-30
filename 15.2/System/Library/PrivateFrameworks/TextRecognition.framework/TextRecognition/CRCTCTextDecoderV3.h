@interface CRCTCTextDecoderV3 : CRCTCCVNLPTextDecoder

+ (id)lmSupportedLanguages;

- (struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })pruningPolicy;

@end
