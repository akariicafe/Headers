@class NSString, NSMutableDictionary;

@interface CopernicusDecoder : NSObject <ATLDecoder, ATLStatefulDecoder>

@property (retain, nonatomic) NSString *endPointIdentifier;
@property (nonatomic) unsigned char state;
@property (nonatomic) unsigned int transactionType;
@property (retain, nonatomic) NSMutableDictionary *stepUpData;

+ (id)getInstance;
+ (BOOL)isHomeAID:(id)a0;
+ (BOOL)isHydraAID:(id)a0;
+ (BOOL)isAutomotiveAID:(id)a0;
+ (BOOL)supportsStepUp:(id)a0;
+ (BOOL)isCopernicus:(id)a0;

- (void)cleanup;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (void).cxx_destruct;
- (id)init;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)handleEventInIdle:(unsigned char)a0 eventData:(id)a1 appletAID:(id)a2 error:(id *)a3;
- (id)handleEventInStandard:(unsigned char)a0 eventData:(id)a1 appletAID:(id)a2 error:(id *)a3;
- (id)handleEventInFast:(unsigned char)a0 eventData:(id)a1 appletAID:(id)a2 error:(id *)a3;
- (id)handleEventInDummy:(unsigned char)a0 eventData:(id)a1 appletAID:(id)a2 error:(id *)a3;
- (id)handleMessageInExchange:(id)a0 appletAID:(id)a1 error:(id *)a2;
- (id)handleFailureWithImmediateExit:(unsigned char)a0 appletAID:(id)a1 error:(id *)a2;
- (id)handleFailure:(unsigned char)a0 appletAID:(id)a1 error:(id *)a2;
- (id)handleControlFlow:(id)a0 appletAID:(id)a1 error:(id *)a2;
- (id)handleApplicationSpecific:(id)a0 appletAID:(id)a1 error:(id *)a2;

@end
