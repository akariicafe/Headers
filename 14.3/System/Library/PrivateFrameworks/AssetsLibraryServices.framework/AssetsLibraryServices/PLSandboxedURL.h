@class NSString;

@interface PLSandboxedURL : NSURL {
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_initSandboxExtensionToken:(id)a0 consume:(BOOL)a1;
- (void)_commonPLSandboxedURLInitialize;
- (id)initWithURL:(id)a0 sandboxExtensionToken:(id)a1 consume:(BOOL)a2;
- (id)initFileURLWithPath:(id)a0 sandboxExtensionToken:(id)a1 consume:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
