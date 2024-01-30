@class NSString;

@interface PKStandaloneTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) long long transactionType;
@property (readonly, nonatomic, getter=isWalletForeground) BOOL walletForeground;

+ (id)createForPassUniqueIdentifier:(id)a0 transactionType:(long long)a1 walletForeground:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
