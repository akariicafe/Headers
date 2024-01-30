@class NSString, NSNumber;

@interface STShowStockOverviewRequest : AFSiriRequest {
    NSString *_name;
    NSString *_symbol;
    NSString *_exchange;
    NSNumber *_price;
    NSNumber *_high;
    NSNumber *_low;
    NSNumber *_change;
    NSNumber *_changePercent;
    NSString *_chartData;
}

+ (BOOL)supportsSecureCoding;

- (id)price;
- (id)high;
- (id)low;
- (id)change;
- (id)symbol;
- (void).cxx_destruct;
- (id)exchange;
- (id)changePercent;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)name;
- (id)chartData;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithName:(id)a0 symbol:(id)a1 exchange:(id)a2 price:(id)a3 high:(id)a4 low:(id)a5 change:(id)a6 changePercent:(id)a7 chartData:(id)a8;

@end
