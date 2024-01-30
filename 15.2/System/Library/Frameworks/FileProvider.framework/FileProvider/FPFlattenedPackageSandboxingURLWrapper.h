@class FPSandboxingURLWrapper;

@interface FPFlattenedPackageSandboxingURLWrapper : FPSandboxingURLWrapper {
    FPSandboxingURLWrapper *_packageWrapper;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0 packageURL:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
