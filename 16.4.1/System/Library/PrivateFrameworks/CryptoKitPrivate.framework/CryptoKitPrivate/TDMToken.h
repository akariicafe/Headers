@class _TtC16CryptoKitPrivate9TDMClient;

@interface TDMToken : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate9TDMClient *tdmClient;

- (void).cxx_destruct;
- (id)blindedElement;
- (id)finalizeWithEvaluatedElement:(id)a0 proof:(id)a1 publicKey:(id)a2 fsr:(id)a3 error:(id *)a4;
- (id)initWithTID:(id)a0;

@end
