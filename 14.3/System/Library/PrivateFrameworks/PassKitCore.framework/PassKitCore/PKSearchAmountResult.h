@class NSString, PKCurrencyAmount;

@interface PKSearchAmountResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) long long comparison;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)tokenType;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
