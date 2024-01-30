@interface RTDiagnosticOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long optionsMask;

- (void)encodeWithCoder:(id)a0;
- (void)setMask:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)clearMask;
- (BOOL)hasMask:(unsigned long long)a0;
- (id)initWithOptionsMask:(unsigned long long)a0;

@end
