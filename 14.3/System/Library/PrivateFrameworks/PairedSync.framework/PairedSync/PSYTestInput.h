@interface PSYTestInput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long action;

+ (id)testInputWithAction:(long long)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
