@class FPSandboxingURLWrapper;

@interface FPFlattenedPackageSandboxingURLWrapper : FPSandboxingURLWrapper {
    FPSandboxingURLWrapper *_packageWrapper;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 packageURL:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
