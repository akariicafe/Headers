@class NSString, NSArray;

@interface PKSearchQuery : NSObject <NSSecureCoding> {
    unsigned long long _domain;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (readonly, nonatomic) unsigned long long domain;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *tokens;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)dateToken;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)categoryToken;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1;
- (id)_groupTokenOfType:(unsigned long long)a0;
- (id)merchantToken;
- (id)locationTokens;
- (id)amountToken;
- (id)transactionTypes;
- (id)transactionStatuses;
- (id)transactionSources;
- (id)peerPaymentSubTypeToken;
- (id)rewardsToken;
- (id)tags;
- (void)encodeWithCoder:(id)a0;
- (id)personToken;

@end
