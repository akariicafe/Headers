@class NSDecimalNumber, NSString, NSArray, PKCurrencyAmountSelectorOption, PKAccountUser;

@interface PKCurrencyAmountSelectorOptionProvider : NSObject {
    PKAccountUser *_accountUser;
    NSArray *_defaultAmounts;
    NSArray *_customAmounts;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) PKCurrencyAmountSelectorOption *selectedOption;
@property (copy, nonatomic) id /* block */ optionsUpdateHandler;

- (void).cxx_destruct;
- (id)_optionWithAmount:(id)a0 isCustom:(BOOL)a1 selected:(BOOL)a2;
- (void)_updateOptions;
- (id)initWithType:(long long)a0 accountUser:(id)a1 currencyCode:(id)a2;
- (void)insertCustomAmount:(id)a0;
- (void)removeCustomAmount:(id)a0;
- (void)selectAmount:(id)a0;

@end
