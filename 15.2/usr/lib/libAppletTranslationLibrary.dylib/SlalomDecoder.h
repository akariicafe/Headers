@class NSNumber, NSMutableArray;

@interface SlalomDecoder : NSObject <ATLStatefulDecoder, ServiceProviderOpaqueData> {
    BOOL _eotInProgress;
    BOOL _debug;
    NSMutableArray *_hciArray;
    NSNumber *_serviceProvider;
}

+ (id)sharedInstance;
+ (id)getDataAndCheckFeliCaServiceCode:(unsigned short)a0 withBlockNumber:(unsigned char)a1 withTransceiver:(id)a2 withError:(id *)a3;

- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (void)cleanup;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (void).cxx_destruct;
- (id)init;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)parseStartEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseTransactionEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseDeselectEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseEndEvent:(id)a0 withApplet:(id)a1 withTransceiver:(id)a2 error:(id *)a3;
- (id)DecodeStartE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;
- (id)DecodeTransactionE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;

@end
