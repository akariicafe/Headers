@class NSString;

@interface SFSingleCreditCardData : WBSSingleCreditCardData

@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *displayText;

- (void).cxx_destruct;
- (id)initWithHeaderText:(id)a0 displayText:(id)a1 type:(long long)a2 value:(id)a3;

@end
