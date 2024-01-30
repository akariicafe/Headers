@interface DIVerifyParams : DIBaseParams

+ (BOOL)supportsSecureCoding;

- (BOOL)verifyWithError:(id *)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;

@end
