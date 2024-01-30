@class NSString;

@interface CDPLocalSecret : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *validatedSecret;
@property (readonly, nonatomic) unsigned long long secretType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValidatedSecret:(id)a0 secretType:(unsigned long long)a1;

@end
