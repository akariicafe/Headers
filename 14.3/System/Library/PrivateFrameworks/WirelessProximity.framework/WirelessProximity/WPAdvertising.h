@protocol WPAdvertisingDelegate;

@interface WPAdvertising : WPClient

@property (retain, nonatomic) id<WPAdvertisingDelegate> delegate;

+ (unsigned char)puckStringToType:(id)a0;
+ (id)puckTypeToString:(unsigned char)a0;

- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void).cxx_destruct;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)registerService:(id)a0;
- (void)invalidate;
- (id)parseCompanyData:(id)a0;
- (void)deregisterService:(id)a0;

@end
