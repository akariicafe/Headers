@interface MercuryDecoder : NSObject <ATLDecoder>

+ (id)DecodeE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 transactionInfo:(id *)a1 error:(id *)a2;
+ (BOOL)IsIncompatibleApplet:(unsigned int)a0 sw:(unsigned short)a1;
+ (void)RemoveMatchedTapIns:(id)a0 transactionsInProgress:(id)a1;
+ (void)ApplyHackFor50863616:(id)a0 historyRecords:(id)a1 transceiver:(id)a2;
+ (id)DecodeE456TLV:(const struct { char *x0; unsigned long long x1; } *)a0 currencyExponent:(id)a1 error:(id *)a2;
+ (BOOL)isSpecialBusErrorFor45299868:(id)a0 state:(id)a1 transaction:(id)a2;
+ (id)parseActivityTimeout:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)parseEndEvent:(id)a0 withApplet:(id)a1 moduleAID:(id)a2 error:(id *)a3;
+ (id)parseStartEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;

- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;

@end
