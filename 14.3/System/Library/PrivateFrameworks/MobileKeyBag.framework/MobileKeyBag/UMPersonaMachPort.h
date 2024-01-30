@interface UMPersonaMachPort : NSMachPort <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)replacementObjectForCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
