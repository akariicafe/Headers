@interface WBSSingleCreditCardData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL isCardFromWallet;

- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0 type:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
