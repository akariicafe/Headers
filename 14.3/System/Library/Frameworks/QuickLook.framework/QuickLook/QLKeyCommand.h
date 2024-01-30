@class UIKeyCommand;

@interface QLKeyCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIKeyCommand *keyCommand;
@property unsigned long long keyCommandIdentifier;

+ (id)keyCommandWithKeyCommand:(id)a0 identifier:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
