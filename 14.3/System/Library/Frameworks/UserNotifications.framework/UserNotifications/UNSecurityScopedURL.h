@class NSString;

@interface UNSecurityScopedURL : NSURL {
    NSString *_sandboxExtensionClass;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_allowsDirectEncoding;
- (id)initWithCoder:(id)a0;
- (id)_issueSandboxExtension;
- (id)initFileURLWithPath:(id)a0 sandboxExtensionClass:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
