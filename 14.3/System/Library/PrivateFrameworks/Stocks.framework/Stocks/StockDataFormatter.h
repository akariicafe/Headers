@class NSString, NSNumberFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface StockDataFormatter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decimalFormatterQueue;
@property (retain, nonatomic) NSNumberFormatter *decimalFormatter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *percentFormatterQueue;
@property (retain, nonatomic) NSNumberFormatter *percentFormatter;
@property (readonly, nonatomic, getter=doesLocaleUseASCII) BOOL localeUsesASCII;
@property (readonly, nonatomic) NSString *percentSymbol;

+ (id)sharedDataFormatter;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)formattedNumber:(id)a0 withPrecision:(unsigned long long)a1 useGroupSeparator:(BOOL)a2;
- (id)formattedPriceForStock:(id)a0 withPrecision:(unsigned long long)a1;
- (id)formattedChangeInPointsForStock:(id)a0 withPrecision:(unsigned long long)a1;
- (id)formattedChangeInPercentForStock:(id)a0;
- (id)formattedPriceForStock:(id)a0 withPrecision:(unsigned long long)a1 droppingFractionDigitsIfLengthExceeds:(unsigned long long)a2;
- (void)_resetLocale:(id)a0;
- (id)formattedPercent:(id)a0;
- (id)formattedChangeInPointsForStock:(id)a0 withPrecision:(unsigned long long)a1 droppingFractionDigitsIfLengthExceeds:(unsigned long long)a2;
- (id)formattedNumber:(id)a0 withPrecision:(unsigned long long)a1 useGroupSeparator:(BOOL)a2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)a3;
- (id)_locked_formatNumber:(id)a0 withPrecision:(unsigned long long)a1 useGroupSeparator:(BOOL)a2;
- (id)formattedPercent:(id)a0 withPrecision:(unsigned long long)a1;
- (id)_locked_formatPercent:(id)a0 withPrecision:(unsigned long long)a1;

@end
