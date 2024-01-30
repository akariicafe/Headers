@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {
    TSUSandboxedURL *_originalSandboxedURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)originalSandboxedURLForNormalizing;
- (id)initWithURL:(id)a0 originalSandboxedURL:(id)a1;
- (BOOL)hasSandboxAccess;

@end
