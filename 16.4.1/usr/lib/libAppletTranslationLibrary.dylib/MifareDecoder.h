@interface MifareDecoder : NSObject <PlasticCardConfigurableDecoder>

+ (id)ParseTimeoutEventISO:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)ParseEndEventShort:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)ParseTimeoutEventNative:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)parseEndEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (BOOL)didTransactionError:(unsigned char)a0 withISOParameters:(const struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned char x4[32]; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8[3]; unsigned char x9[0]; } *)a1 withTransactionResult:(unsigned short *)a2;
+ (BOOL)didTransactionError:(unsigned char)a0 withParameters:(const struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4[32]; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8[3]; unsigned char x9[0]; } *)a1 withTransactionResult:(unsigned short *)a2;
+ (id)getAppletStateAndHistory:(unsigned char)a0 withTransceiver:(id)a1 withApplet:(id)a2 withPackage:(id)a3 withModule:(id)a4 withError:(id *)a5;
+ (BOOL)getDontWaitForEOT:(unsigned char)a0;
+ (id)getEmReentryDelayMs:(unsigned char)a0;
+ (id)getSPID:(id)a0 withApplet:(id)a1 withError:(id *)a2;
+ (id)getServiceProvider:(unsigned char)a0;
+ (id)getSubDecoder:(unsigned char)a0;
+ (id)parseEndEventISO:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)parseStartEventISO:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)parseStartEventNative:(id)a0 withApplet:(id)a1 error:(id *)a2;

- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (BOOL)supportsPlasticCardMode:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3;

@end
