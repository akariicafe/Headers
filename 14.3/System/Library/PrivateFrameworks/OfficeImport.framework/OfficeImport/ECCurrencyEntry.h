@class NSString;

@interface ECCurrencyEntry : NSObject {
    NSString *mLassoCurrencyCode;
    NSString *mXlLangId;
    NSString *mXlCurrencySymbol;
    BOOL mAppliesToExport;
    int mXlAccountingFormat;
}

+ (id)currencyWithLassoCode:(id)a0 langId:(int)a1 xlSymbol:(id)a2;
+ (id)currencyWithLassoCode:(id)a0 langId:(int)a1 xlSymbol:(id)a2 accountingFormat:(int)a3;
+ (id)currencyWithLassoCode:(id)a0 langId:(int)a1 xlSymbol:(id)a2 isExport:(BOOL)a3;
+ (id)currencyWithLassoCode:(id)a0 langId:(int)a1 xlSymbol:(id)a2 isExport:(BOOL)a3 accountingFormat:(int)a4;

- (void).cxx_destruct;
- (id)initWithLassoCode:(id)a0 langId:(int)a1 xlSymbol:(id)a2 isExport:(BOOL)a3 accountingFormat:(int)a4;

@end
