@interface RamXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (id)initWithSize:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)createRamBackend;

@end
