@protocol CRKIDSAddressTranslator, CRKIDSPrimitives;

@interface CRKCatalystIDSPrimitives : NSObject <CATIDSPrimitives>

@property (readonly, nonatomic) id<CRKIDSPrimitives> primitives;
@property (readonly, nonatomic) id<CRKIDSAddressTranslator> addressTranslator;

+ (id)crkOptionsFromOptions:(id)a0;

- (void).cxx_destruct;
- (void)addMessageHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (id)addressForAppleID:(id)a0;
- (void)sendMessage:(id)a0 toAddress:(id)a1 fromID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (id)initWithPrimitives:(id)a0 addressTranslator:(id)a1;

@end
