@class NSError;

@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (readonly, nonatomic) BOOL connect;
@property (retain, nonatomic) NSError *cancelError;

+ (id)closeConnection;
+ (id)openConnection;

- (void)cancelWithError:(id)a0;
- (void)_finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initForClosing;
- (id)initForOpening;
- (id)initWithConnect:(BOOL)a0;
- (void)runForPairingDriver:(id)a0;

@end
