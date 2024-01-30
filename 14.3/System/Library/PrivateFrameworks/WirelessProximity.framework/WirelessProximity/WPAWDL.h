@protocol WPAWDLDelegate;

@interface WPAWDL : WPClient

@property (weak, nonatomic) id<WPAWDLDelegate> delegate;
@property BOOL useSmallerAirDrop;

+ (id)generateDataFromEmails:(id)a0;
+ (id)hashEmail:(id)a0;

- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)deviceDiscovered:(id)a0;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)startConnectionlessAWDLServiceAdvertisingWithData:(id)a0;
- (void)startConnectionlessAWDLServiceScanning;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)stopConnectionlessAWDLServiceAdvertising;
- (void)stopConnectionlessAWDLServiceScanning;
- (void)invalidate;

@end
