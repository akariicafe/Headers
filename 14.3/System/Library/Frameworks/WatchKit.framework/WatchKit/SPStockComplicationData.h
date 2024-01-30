@class NSString;

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *tickerSymbolText;
@property (retain, nonatomic) NSString *priceText;
@property (retain, nonatomic) NSString *marketCapText;
@property (retain, nonatomic) NSString *changeInPercentText;
@property (retain, nonatomic) NSString *changeInPointsText;
@property (retain, nonatomic) NSString *changeText;
@property (nonatomic) unsigned long long changeDirection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
