@class NSString;

@interface _EXSandboxExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL sandboxed;
@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long consumedSandboxExtension;
@property (retain) NSString *sandboxExtensionToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithExtensionClass:(id)a0 machServiceName:(id)a1 process:(struct { unsigned int x0[8]; })a2;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (BOOL)consume;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
