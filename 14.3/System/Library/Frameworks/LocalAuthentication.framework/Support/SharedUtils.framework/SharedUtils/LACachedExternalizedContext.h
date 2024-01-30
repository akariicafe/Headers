@class NSData;
@protocol LAContextExternalizationProt, LAContextExternalizationObserverProt;

@interface LACachedExternalizedContext : NSObject {
    id<LAContextExternalizationProt> _externalizationDelegate;
}

@property (retain, nonatomic) NSData *cachedExternalizedContext;
@property (readonly, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<LAContextExternalizationObserverProt> externalizationObserver;

- (void).cxx_destruct;
- (id)initWithExternalizationDelegate:(id)a0;
- (id)initWithExternalizedContext:(id)a0;
- (id)externalizedContextWithError:(id *)a0;
- (void)externalizedContextWithReply:(id /* block */)a0;

@end
