@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isUnlocked;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFormat:(const void *)a0 baseBackendXPC:(id)a1;
- (void)replaceWithBackendXPC:(id)a0;

@end
