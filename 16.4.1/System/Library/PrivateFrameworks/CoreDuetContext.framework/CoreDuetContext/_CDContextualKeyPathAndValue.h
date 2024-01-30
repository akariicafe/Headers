@class _CDContextValue, _CDContextualKeyPath;

@interface _CDContextualKeyPathAndValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _CDContextualKeyPath *keyPath;
@property (retain, nonatomic) _CDContextValue *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0 andValue:(id)a1;
- (void).cxx_destruct;

@end
