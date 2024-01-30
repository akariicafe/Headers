@interface HerculesDecoder : NSObject <MifareSubDecoder>

+ (id)addAmount:(const struct { char *x0; unsigned long long x1; } *)a0 withCurrency:(const struct { char *x0; unsigned long long x1; } *)a1 usingAmountKey:(id)a2 usingCurrencyKey:(id)a3 usingExponentKey:(id)a4;
+ (id)calculateTransactionSN:(const struct { char *x0; unsigned long long x1; } *)a0 withDeviceId:(const struct { char *x0; unsigned long long x1; } *)a1 withDeviceSN:(const struct { char *x0; unsigned long long x1; } *)a2;
+ (BOOL)canDecodeSPId:(unsigned char)a0;
+ (BOOL)didTransactionError:(const struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4[32]; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8[3]; unsigned char x9[0]; } *)a0 withTransactionResult:(unsigned short *)a1;
+ (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
+ (BOOL)getDontWaitForEOT;
+ (id)getEmReentryDelayMs;
+ (id)getIdentifier:(const struct { char *x0; unsigned long long x1; } *)a0 withInstanceIdentifier:(const struct { char *x0; unsigned long long x1; } *)a1;
+ (id)getRecords:(id)a0 withError:(id *)a1;
+ (id)getServiceProvider:(unsigned char)a0;
+ (id)getTransactionsFromRecord:(const struct { char *x0; unsigned long long x1; } *)a0 withCityCode:(id)a1 withServerRefreshRequired:(id *)a2 withStateDict:(id)a3 withError:(id *)a4;
+ (id)parseBalanceCollection:(const struct { char *x0; unsigned long long x1; } *)a0 withError:(id *)a1;
+ (id)parseBalanceItem:(const struct { unsigned long long x0; struct { char *x0; unsigned long long x1; } x1; } *)a0 withError:(id *)a1;
+ (id)parseDalData:(id)a0 withCityCode:(id)a1 withStateDict:(id)a2 withError:(id *)a3;
+ (id)parseDateAndTime:(const struct { char *x0; unsigned long long x1; } *)a0;
+ (id)parseEvent:(const struct { unsigned long long x0; struct { char *x0; unsigned long long x1; } x1; } *)a0 withError:(id *)a1;
+ (id)parseIdentifierCollection:(const struct { char *x0; unsigned long long x1; } *)a0 withError:(id *)a1;
+ (id)parseIdentifierItem:(const struct { unsigned long long x0; struct { char *x0; unsigned long long x1; } x1; } *)a0 withError:(id *)a1;
+ (id)parsePurchaseEvent:(const struct { char *x0; unsigned long long x1; } *)a0 withError:(id *)a1;
+ (id)parseSaleEvent:(const struct { char *x0; unsigned long long x1; } *)a0 withError:(id *)a1;
+ (id)parseUseEvent:(const struct { char *x0; unsigned long long x1; } *)a0 withError:(id *)a1;
+ (BOOL)supportsPlasticCardMode:(unsigned char)a0 withTransceiver:(id)a1;

@end
