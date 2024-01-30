@interface RamXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (id)initWithSize:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)createRamBackend;

@end
