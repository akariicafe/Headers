@class NSString;

@interface PLSandboxedURL : NSURL {
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 sandboxExtensionToken:(id)a1 consume:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFileURLWithPath:(id)a0 sandboxExtensionToken:(id)a1 consume:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_initSandboxExtensionToken:(id)a0 consume:(BOOL)a1;
- (void)_commonPLSandboxedURLInitialize;

@end
