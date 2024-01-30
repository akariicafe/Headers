@class NSString;

@interface _EXSandboxExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL sandboxed;
@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long consumedSandboxExtension;
@property (retain) NSString *sandboxExtensionToken;

- (BOOL)consume;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithExtensionClass:(id)a0 machServiceName:(id)a1 process:(struct { unsigned int x0[8]; })a2;

@end
