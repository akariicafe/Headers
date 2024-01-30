@class NSString;

@interface DDMatchMoneyAmount : DDMatch

@property (readonly, nonatomic) NSString *currency;
@property (readonly, nonatomic) double amount;

- (id)initWithDDScannerResult:(id)a0;
- (void).cxx_destruct;

@end
