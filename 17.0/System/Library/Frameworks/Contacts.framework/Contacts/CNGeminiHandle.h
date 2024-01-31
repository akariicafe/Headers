@class NSString;

@interface CNGeminiHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long handleType;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
