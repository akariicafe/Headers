@class NSString;

@interface CNGeminiHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long handleType;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 type:(long long)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
