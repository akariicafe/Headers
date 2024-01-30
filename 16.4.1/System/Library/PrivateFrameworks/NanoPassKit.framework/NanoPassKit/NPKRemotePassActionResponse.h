@class NSString, PKCurrencyAmount;

@interface NPKRemotePassActionResponse : NPKRemotePassAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int result;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;

- (id)description;

@end
