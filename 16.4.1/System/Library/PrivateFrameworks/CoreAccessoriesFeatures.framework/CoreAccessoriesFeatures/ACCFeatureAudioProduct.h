@class NSMutableSet, NSXPCConnection;

@interface ACCFeatureAudioProduct : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain) NSMutableSet *endpoints;

+ (id)sharedManager;

- (id)_init;
- (void).cxx_destruct;
- (void)_connectToACCFeatureAudioProduct;
- (void)_disconnectFromACCFeatureAudioProduct;
- (void)accessoryAttached:(id)a0 connection:(id)a1;
- (void)accessoryDetached:(id)a0 connection:(id)a1;
- (void)processAudioProductCerts:(id)a0 forModel:(id)a1 firstConnectionAfterPair:(BOOL)a2 connection:(id)a3 endpoint:(id)a4;

@end
