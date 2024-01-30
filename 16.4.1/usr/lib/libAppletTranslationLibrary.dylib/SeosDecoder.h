@interface SeosDecoder : NSObject <ATLDecoder>

+ (id)parseEndEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)parseStartEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
+ (id)resolveServiceProvider:(unsigned char)a0;

- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;

@end
