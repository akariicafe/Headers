@class _TtC16CryptoKitPrivate9TDMServer;

@interface TDMTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate9TDMServer *tdmServer;

- (id)publicKey;
- (id)evaluate:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)FSR;
- (BOOL)validateOutput:(id)a0 TID:(id)a1;

@end
